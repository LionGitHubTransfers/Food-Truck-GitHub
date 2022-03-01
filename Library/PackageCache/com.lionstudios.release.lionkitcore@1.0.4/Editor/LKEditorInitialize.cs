#if UNITY_EDITOR
using System;
using System.IO;
using System.Security.AccessControl;
using System.Text;
using UnityEngine;
using UnityEditor;
using UnityEditor.PackageManager;
using UnityEditor.PackageManager.Requests;
using PackageInfo = UnityEditor.PackageManager.PackageInfo;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using LionStudios.Suite.Editor.PackageManager;

namespace LionStudios.Suite.Editor
{
	[InitializeOnLoad]
	public class LKEditorInitialize
	{
		private const string ErrListPackageFailed = "Failed to list packages. Check manifest.json for errors.";

		private const string ErrSearchRequestFailed =
			"Failed to query package manager. Check internet connection or contact Lion Studios.";

		private const string ErrMissingRemotePackage =
			"Failed to find latest version of Lion Kit. Check internet connection or contact Lion Studios.";

		private const string ErrEmbedPackageFailed =
			"Failed to update Lion Kit. Try re-installing or contact Lion Studios.";

		private const string ProguardSettingsTemplate =
			"\n# Lion Analytics Proguard Settings (DO NOT REMOVE)\n"
			+ "-keep public class com.adjust.sdk.** { *; }\n";
		
		private const string KeyLastUpdateCheckTime = "com.lionstudios.last_update_check_time";
		private static readonly DateTime EpochTime = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		private static readonly int SecondsInADay = (int) TimeSpan.FromDays(1).TotalSeconds;

		private static SearchRequest searchRequest = null;
		private static AddRequest installRequest = null;
		private static ListRequest listRequest = null;

		private static string installedVersion = string.Empty;
		private static string latestVersion = string.Empty;

		static LKEditorInitialize()
		{
			// init settings
			LionSettingsService.InitializeService();

			try
			{
				string lastSnapshot = EditorPrefs.GetString("LK_TIME_SINCE_LAST_SNAPSHOT", EpochTime.ToString());
				DateTime lastSnapshotTime = DateTime.Parse(lastSnapshot);
				if (DateTime.UtcNow - lastSnapshotTime > TimeSpan.FromHours(1))
				{
					LionPackageService.ReloadRuntimePackages();
				}
			}
			catch (Exception e)
			{
				LionDebug.LogWarning("Snapshot date format malformed. Continuing without snapshot...");
			}

			// Check if publisher has enabled auto-update
			if (EditorPrefs.GetBool(LionCore.LK_AUTO_UPDATE_ENABLED_KEY, true))
			{
				TryAutoUpdate();
			}
			
#if UNITY_ANDROID
            UpdateProguardCustomSettings();
#endif

			// show integration window at start-up
#if !LION_SUITE_DEV
			if (IsOutdated())
			{
				//LionSettingsManager.OpenManagerWindow();
				EditorPrefs.SetString(LionCore.LK_LAST_INSTALL_VERSION, LionCore.Version);
			}
#endif
		}

		private static bool IsOutdated()
		{
			if (!LionPackageService.SnapshotExists) return true;

			PackageUtility.PackageInfo pkg = PackageUtility.GetPackageInfo("lionstudios", "lionkitcore");
			if (pkg != null)
			{
				string currentVerStr = PackageUtility.GetPackageInfoNonAlloc("lionstudios", "lionkitcore", "version");
				PackageUtility.PackageInfo oldSnapshot = PackageUtility.GetPackageInfo("lionstudios", "lionkitcore");

				if (oldSnapshot == null)
				{
					LionPackageService.ReloadRuntimePackages();
					return true;
				}
			
			
				if (currentVerStr == null)
				{
					return false;
				}
			
				Version lastInstallVer = new Version(oldSnapshot.version);
				Version currentVer = new Version(currentVerStr);
			
				if (currentVer.CompareTo(lastInstallVer) != 0)
				{
					return true;
				}
			}
		
			return false;
		}

		private static void TryAutoUpdate()
		{
			var now = (int) (DateTime.UtcNow - EpochTime).TotalSeconds;
			if (EditorPrefs.HasKey(KeyLastUpdateCheckTime))
			{
				var elapsedTime = now - EditorPrefs.GetInt(KeyLastUpdateCheckTime);

				// Check if we have checked for a new version in the last 24 hrs and skip update if we have.
				if (elapsedTime < SecondsInADay)
					return;
			}

			// Update last checked time.
			EditorPrefs.SetInt(KeyLastUpdateCheckTime, now);
		}

		private static void CheckLatestVersion()
		{
			if (searchRequest.IsCompleted)
			{
				if (searchRequest.Status == StatusCode.Success)
				{
					PackageInfo[] packages = searchRequest.Result;
					if (packages == null || packages.Length == 0)
					{

						Debug.LogError(ErrMissingRemotePackage);
						return;
					}

					if (packages.Length > 1)
					{
						Debug.LogWarning("Found multiple remote Lion Kit packages. This shouldn't happen.");
					}

					latestVersion = packages[0].version;

					// Check if the current and latest version are the same. If so, skip update
					if (Version.Parse(installedVersion).Equals(Version.Parse(latestVersion)))
					{
						Debug.Log("Lion Kit is up-to-date!");
						EditorApplication.update -= CheckLatestVersion;
						return;
					}

					PromptForUpdate();
				}
				else
				{
					Debug.LogError(ErrSearchRequestFailed);
				}

				EditorApplication.update -= CheckLatestVersion;
			}
		}

		private static void CheckForInstall()
		{
			if (installRequest.IsCompleted)
			{
				if (installRequest.Status == StatusCode.Success)
				{
					Debug.Log(string.Format("Updated Lion Lit to v{0}", latestVersion));
				}
				else
				{
					Debug.LogError(ErrEmbedPackageFailed);
				}

				EditorApplication.update -= CheckLatestVersion;
			}
		}

		/// <summary>
		/// A new version of the plugin is available. Show a dialog.
		/// </summary>
		private static void PromptForUpdate()
		{
			// A new version of the plugin is available. Show a dialog to the publisher.
			var option = UnityEditor.EditorUtility.DisplayDialogComplex(
				"Lion Kit Plugin Update",
				"A new version of Lion Studios' Lion Kit plugin is available for download. Update now?",
				"Download",
				"Not Now",
				"Don't Ask Again");

			switch (option)
			{
				// download
				case 0:
					installRequest = Client.Add("com.lionstudios.release.lionkitcore");
					EditorApplication.update += CheckForInstall;
					break;

				// not now
				case 1:
					// do nothing
					break;

				// dont ask again
				case 2:
					EditorPrefs.SetBool(LionCore.LK_AUTO_UPDATE_ENABLED_KEY, false);
					break;
			}
		}
		
		internal static void UpdateProguardCustomSettings()
		{
			const string fileName = "proguard-user.txt";
			const string assetPath = "Plugins/Android";
			string fullSettingsPath = Path.Combine(Application.dataPath, assetPath, fileName);

			if (!File.Exists(fullSettingsPath))
			{
				string directoryPath = Path.Combine(Application.dataPath, assetPath);
				if (!Directory.Exists(directoryPath))
				{
					
					Directory.CreateDirectory(directoryPath);
				}
				
				using (FileStream fs = File.Create(fullSettingsPath))
				{
					Byte[] contents = new UTF8Encoding(true).GetBytes(ProguardSettingsTemplate);
					fs.Write(contents, 0, contents.Length);
				}
			}
			else
			{
				string contents = File.ReadAllText(fullSettingsPath);
				if (!contents.Contains(ProguardSettingsTemplate))
				{
					contents += ProguardSettingsTemplate;
					File.WriteAllText(fullSettingsPath, contents);
				}   
			}
		}
	}
}
#endif