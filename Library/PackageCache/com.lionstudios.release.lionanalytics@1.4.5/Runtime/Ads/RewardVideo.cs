using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LionStudios.Suite.Analytics
{
    public class RewardVideo : PersistentData<RewardVideo>
    {
        #region player pref keys
        private const string key_event = "d{0}_retained";
		#endregion

		private static RewardVideo _inst;
		private static RewardVideo instance
		{
			get
			{
				if (_inst == null)
				{
					_inst = RewardVideo.Load();
				}
				return _inst;
			}
		}

		public int reward_videos_collected = 0;

		internal static void TryLogRewardVideoCollect()
        {
			instance.reward_videos_collected++;

			LionAnalyticsSettings settings = LionStudios.Suite.Core.LionCore.GetContext()
				.GetSettings<LionAnalyticsSettings>();

			if (instance.reward_videos_collected == 5 || instance.reward_videos_collected == 15)
			{
				string key = string.Format(key_event, instance.reward_videos_collected);
				LionAnalytics.LogEvent(key, isUAEvent: true);
			}
		}
	}
}