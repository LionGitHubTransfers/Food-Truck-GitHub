using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using System;
using System.Globalization;
using System.Threading;

namespace LionStudios.Suite.Analytics
{
	public class Retention : PersistentData<Retention>
	{
		#region errors / exceptions
		private const string warn_time_travel = "Lion Kit: Retention check failed. User went back in time.";
		#endregion

		#region player pref keys
		private const string key_event = "d{0}_retained";
		#endregion

		private static Retention _inst;
		private static Retention instance
		{
			get
			{
				if (_inst == null)
				{
					_inst = Retention.Load();
				}
				return _inst;
			}
		}

		public string last_login_time = string.Empty;
		public string install_time = string.Empty;

		public static string GetLastLoginTime()
		{
			if (string.IsNullOrEmpty(instance.last_login_time))
			{
				ClearLastLoginTime();
			}

			return instance.last_login_time;
		}

		public static void ClearLastLoginTime()
		{
			instance.last_login_time = DateTime.UtcNow.ToString();
			instance.SaveLocal();
		}

		static void InitializeCulture()
		{
			CultureInfo CI = CultureInfo.CurrentCulture;
			Thread.CurrentThread.CurrentCulture = CI;
			Thread.CurrentThread.CurrentUICulture = CI;
		}

		public static string GetInstallTime()
		{
			if (string.IsNullOrEmpty(instance.install_time))
			{
				ClearInstallTime();
			}
			return instance.install_time;
		}

		public static void ClearInstallTime()
		{
			instance.install_time = DateTime.UtcNow.ToString();
			instance.SaveLocal();
		}

		internal static void TryLogRetention()
		{
			InitializeCulture();

			DateTime now = DateTime.UtcNow;
			DateTime lastTime = DateTime.Parse(GetLastLoginTime());
			DateTime installTime = DateTime.Parse(GetInstallTime());

			if (installTime == default(DateTime))
			{
				instance.install_time = now.ToString();
			}

			int daysSinceInstall = (now - installTime).Days;

			// quick sanity check 
			if (now < lastTime || now < installTime)
			{
				UnityEngine.Debug.LogWarning(warn_time_travel);
				return;
			}

			LionDebug.LionDebugSettings debugSettings = LionCore.GetContext()
				.GetSettings<LionDebug.LionDebugSettings>();

			
			LionAnalyticsSettings analyticsSettings = LionCore.GetContext()
				.GetSettings<LionAnalyticsSettings>();

			if (debugSettings.debugLogLevel == LionDebug.DebugLogLevel.Verbose)
			{
				string verboseMsg = $"Retention: {daysSinceInstall.ToString()}\n"
									+ $"Time: {now.ToString()}\n"
									+ $"Last Login: {lastTime.ToString()}\n"
									+ $"Installed: {installTime.ToString()}\n"
									+ $"Should log new retention? {(now.Date > lastTime.Date).ToString()}";
				LionDebug.Log(verboseMsg, LionDebug.DebugLogLevel.Verbose);
			}

			if (now.Date > lastTime.Date && (daysSinceInstall == 3 || daysSinceInstall == 7 || daysSinceInstall == 15))
			{
				// throws event for retention using key "d{daysSinceInstall}_retention"
				//Engagement.TryFireEvent(EngagementEvent.retention);
				
				string key = string.Format(key_event, daysSinceInstall.ToString());
				LionAnalytics.LogEvent(key, isUAEvent: true);
			}

			instance.last_login_time = now.ToString();
			instance.SaveLocal();
		}
	}
}