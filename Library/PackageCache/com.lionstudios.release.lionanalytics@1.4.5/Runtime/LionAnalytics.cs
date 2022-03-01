using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using LionStudios.Runtime.Sdk;
using UnityEngine;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using LionStudios.Suite.Utility.Json;
using UnityEngine.Scripting;

[assembly: Preserve]
namespace LionStudios.Suite.Analytics
{
    public class LionAnalytics : ILionModule, ILionSettingsProvider
    {
        private const string LionCoreVerKey = "lslc-version";
        private const string LionAnalyticsVerKey = "lsla-version";
        
        #region Settings

        private static LionAnalyticsSettings _settings;

        public ILionSettingsInfo GetSettings()
        {
            if (_settings == null)
            {
                _settings = new LionAnalyticsSettings();
            }

            return _settings;
        }

        public void ApplySettings(ILionSettingsInfo newSettings)
        {
            _settings = (LionAnalyticsSettings) newSettings;
        }

        #endregion

        public static string Version
        {
            get
            {
                PackageUtility.PackageInfo pkg = PackageUtility.GetPackageInfo("lionstudios", "lionanalytics");
                if (pkg != null)
                {
                    return pkg.version;
                }

                return "0.0.0";
            }
        }

        private static string ReleaseVersion 
        {
            get
            {
#if LK_VERSION_DEV
                return "dev"
#elif LK_VERSION_BETA
                return "beta"
#endif
                return "release";
            }
        }

        public delegate void LionEventDelegate(LionGameEvent gameEvent, bool isUAEvent, params Runtime.Sdk.SdkId[] exclusiveTo);

        public static event LionEventDelegate OnLogEvent;
        
        #region Additional Data
        private static Dictionary<string, object> GlobalAdditionalData = new Dictionary<string, object>();

        private static Dictionary<string, object> _coreContextParams;
        private static Dictionary<string, object> CoreContextParams
        {
            get
            {
                if (_coreContextParams == null)
                {
                    LionCoreContext ctx = LionCore.GetContext();

                    _coreContextParams = new Dictionary<string, object>();
                    _coreContextParams.Add("lsla", LionAnalytics.Version);
                    _coreContextParams.Add("lslc", LionCore.Version);
                }

                return _coreContextParams;
            }
        }
        #endregion

        public int Priority => 1;

        private static int _sequenceIndex = 0;
        private static int? playerLevel = null;
        private static int? playerXP = null;
        private static bool isTutorial = false;
        private static int? softCurrency = null;
        private static int? hardCurrency = null;
        private static string buildVersion = null;
        public static void LogEvent(string evName, bool isUAEvent = false, Dictionary<string,object > additionalData = null,
            params Runtime.Sdk.SdkId[] exclusiveTo)
        {
            LogEvent(evName, null, isUAEvent, additionalData, exclusiveTo: exclusiveTo);
        }

        public static void LogEvent(string evName, Dictionary<string, object> args, bool isUAEvent = false, Dictionary<string,object > additionalData = null,
            params Runtime.Sdk.SdkId[] exclusiveTo)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventName = evName;
            ev.eventParams = args != null
                ? new Dictionary<string, object>(args)
                : new Dictionary<string, object>();
            LogEvent(ev, isUAEvent, additionalData, exclusiveTo: exclusiveTo);
        }

        public static void LogEvent(LionGameEvent gameEvent, bool isUAEvent = false,
            Dictionary<string, object> additionalData = null,
            params Runtime.Sdk.SdkId[] exclusiveTo)
        {
            if (isUAEvent)
            {
                exclusiveTo = new SdkId[]
                {
                    SdkId.Adjust,
                    SdkId.Firebase
                };
            }

#if DEVELOPMENT_BUILD
            gameEvent.AddParam(EventParam.debug, "true");
#else
            gameEvent.AddParam(EventParam.debug, "false");
#endif
            
            // add time in app
            gameEvent.AddParam(EventParam.timeInApp,
                LionAnalyticsApplication.GetTotalTimeInApp());

            // add event timestamp
            gameEvent.AddParam(EventParam.timestamp, DateTime.UtcNow.ToString());

            // add StoreBuild flag
            gameEvent.AddParam(EventParam.Store, 
                Application.installMode == ApplicationInstallMode.Store);

            // append sequence id and LA version
            gameEvent.AddParam(EventParam.isTutorial, isTutorial);
            gameEvent.AddParam(EventParam.sequenceId, _sequenceIndex);

            // add player level and XP
            if (playerLevel.HasValue)
            {
                gameEvent.AddParam(EventParam.userLevel, (int) playerLevel.Value);    
            }

            if (playerXP.HasValue)
            {
                gameEvent.AddParam(EventParam.userXP, (int) playerXP.Value);
            }
            
            //Add soft currency
            if (softCurrency.HasValue)
            {
                gameEvent.AddParam(EventParam.currentSoftBalance, (int) softCurrency.Value);
            }

            // Add hard currency
            if (hardCurrency.HasValue)
            {
                gameEvent.AddParam(EventParam.currentHardBalance, (int) hardCurrency.Value);
            }

            // Add full build version
            if (!string.IsNullOrEmpty(buildVersion))
            {
                gameEvent.AddParam(EventParam.buildVersion, (string) buildVersion);
            }

            GlobalAdditionalData.Clear();
            if (additionalData != null)
            {
                GlobalAdditionalData = additionalData;
            }
            
            if (!GlobalAdditionalData.ContainsKey(LionCoreVerKey))
            {
                GlobalAdditionalData.Add(LionCoreVerKey, LionCore.Version);
            }

            if (!GlobalAdditionalData.ContainsKey(LionAnalyticsVerKey))
            {
                GlobalAdditionalData.Add(LionAnalyticsVerKey, LionAnalytics.Version);
            }
            
            var additionalDataJson = MiniJson.Serialize(GlobalAdditionalData);
            gameEvent.AddParam(EventParam.additionalData, additionalDataJson);

            
            string eventData = string.Empty;
            if (!string.IsNullOrEmpty(gameEvent.eventName))
            {
                eventData = $"Sending custom event '{gameEvent.eventName}' - EventParams ({gameEvent.eventParams.Count})";
            }
            else
            {
                eventData = $"Sending event '{gameEvent.eventType}' - EventParams ({gameEvent.eventParams.Count})";
            }
            
            eventData += $"\n{gameEvent.ToString()}";
            Debugging.LogEvent(eventData);
            OnLogEvent?.Invoke(gameEvent, isUAEvent, exclusiveTo);
            _sequenceIndex++;
        }
        

        #region State Functions
        public static void ClearPlayerLevel()
        {
            playerLevel = null;
        }

        /// <summary>
        /// Sets the "profile level" of the player. For use when player gains enough XP to
        /// advance a level.
        /// </summary>
        /// <param name="playerLevel"></param>
        public static void SetPlayerLevel(int playerLevel)
        {
            LionAnalytics.playerLevel = playerLevel;
        }

        public static void ClearPlayerXP()
        {
            playerXP = null;
        }

        /// <summary>
        /// Set player XP after user acquires experience points from gameplay.
        /// </summary>
        /// <param name="playerXp"></param>
        public static void SetPlayerXP(int playerXp)
        {
            playerXP = playerXp;
        }

        public static void SetTutorial(bool tutorialState)
        {
            isTutorial = tutorialState;
        }

        #endregion

        #region Standard Events

        public static void GameStart()
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Game;
            ev.gameEventType = GameEventType.Started;
            ev.eventParams = new Dictionary<string, object>();
            Engagement.TryFireEvent(EngagementEvent.GameStart);
            LogEvent(ev);
        }

        #endregion

        #region Level Events
        public static void LevelStart(int level, int attemptNum, int? score = null,
            string levelCollection1 = null, string levelCollection2 = null,
            string missionType = null, string missionName = null,
            Dictionary<string, object> additionalData = null)
        {
            if (string.IsNullOrEmpty(missionName)) missionName = "Level";
            if (string.IsNullOrEmpty(missionType)) missionType = "Level";
            
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Level;
            ev.levelEventType = LevelEventType.Start;
            
            // required params
            ev.AddParam(EventParam.missionID, level.ToString());
            ev.AddParam(EventParam.missionAttempt, attemptNum);

            // Additional params
            ev.AddParam(EventParam.userScore, score);
            ev.AddParam(EventParam.levelCollection1, levelCollection1);
            ev.AddParam(EventParam.levelCollection2, levelCollection2);
            
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);

            Engagement.TryFireEvent(EngagementEvent.LevelStart, level, additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void LevelComplete(int level, int attemptNum, int? score = null, Reward reward = null,
            string levelCollection1 = null, string levelCollection2 = null,
            string missionType = null, string missionName = null,
            Dictionary<string, object> additionalData = null)
        {
            if (string.IsNullOrEmpty(missionName)) missionName = "Level";
            if (string.IsNullOrEmpty(missionType)) missionType = "Level";
            
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Level;
            ev.levelEventType = LevelEventType.Complete;

            // Required params
            ev.AddParam(EventParam.missionID, level.ToString());
            ev.AddParam(EventParam.missionAttempt, attemptNum);

            // Additional params
            ev.AddParam(EventParam.userScore, score);
            ev.AddParam(EventParam.reward, reward);
            
            ev.AddParam(EventParam.levelCollection1, levelCollection1);
            ev.AddParam(EventParam.levelCollection2, levelCollection2);
            
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);
            
            Engagement.TryFireEvent(EngagementEvent.LevelComplete, level, additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void LevelFail(int level, int attemptNum, int? score = null,
            string levelCollection1 = null, string levelCollection2 = null,
            string missionType = null, string missionName = null,
            Dictionary<string, object> additionalData = null)
        {
            if (string.IsNullOrEmpty(missionName)) missionName = "Level";
            if (string.IsNullOrEmpty(missionType)) missionType = "Level";
            
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Level;
            ev.levelEventType = LevelEventType.Fail;

            // Required params
            ev.AddParam(EventParam.missionID, level.ToString());
            ev.AddParam(EventParam.missionAttempt, attemptNum);
            
            ev.AddParam(EventParam.userScore, score);
            
            ev.AddParam(EventParam.levelCollection1, levelCollection1);
            ev.AddParam(EventParam.levelCollection2, levelCollection2);

            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);

            Engagement.TryFireEvent(EngagementEvent.LevelFail, level, additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void LevelRestart(int level, int attemptNum, int? score = null,
            string levelCollection1 = null, string levelCollection2 = null,
            string missionType = null, string missionName = null,
            Dictionary<string, object> additionalData = null)
        {
            if (string.IsNullOrEmpty(missionName)) missionName = "Level";
            if (string.IsNullOrEmpty(missionType)) missionType = "Level";
            
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Level;
            ev.levelEventType = LevelEventType.Restart;
            
            ev.AddParam(EventParam.missionID, level.ToString());
            ev.AddParam(EventParam.missionAttempt, attemptNum);
            
            ev.AddParam(EventParam.userScore, score);
            
            ev.AddParam(EventParam.levelCollection1, levelCollection1);
            ev.AddParam(EventParam.levelCollection2, levelCollection2);
            
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);

            Engagement.TryFireEvent(EngagementEvent.LevelRestart, level, additionalData);
            LogEvent(ev, false, additionalData);
        }

        #endregion

        #region Funnel Events
        public static void FunnelEvent(int funnelStep, string funnelLabel = null, int? funnelValue = null,
            int? levelNum = null, bool isUAEvent = false, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Funnel;
            ev.AddParam(EventParam.funnelStep, funnelStep);
            ev.AddParam(EventParam.funnelLabel, funnelLabel);
            ev.AddParam(EventParam.funnelValue, funnelValue);
            ev.AddParam(EventParam.missionID, levelNum);

            Engagement.TryFireEvent(EngagementEvent.FunnelEvent, additionalData);
            LogEvent(ev, isUAEvent, additionalData);
        }
        #endregion

        #region Ad Events

        public static void BannerLoad(string placement, string network = "unknown", Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Banner;
            ev.adEventType = AdEventType.Loaded;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.adProvider, network);

            Engagement.TryFireEvent(EngagementEvent.BannerLoad, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void BannerLoadFail(string network = "unknown", AdErrorType reason = AdErrorType.Undefined, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Banner;
            ev.adEventType = AdEventType.LoadFail;

            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.placement, "no_placement");
            ev.AddParam(EventParam.adErrorType, reason);

            Engagement.TryFireEvent(EngagementEvent.BannerLoadFail, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void BannerShow(string placement, string network = "unknown", Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Banner;
            ev.adEventType = AdEventType.Show;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.BannerShow, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);        
        }

        public static void BannerShowFail(string placement, string network = "unknown",
            AdErrorType reason = AdErrorType.Undefined, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Banner;
            ev.adEventType = AdEventType.ShowFail;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.adErrorType, reason);

            Engagement.TryFireEvent(EngagementEvent.BannerShowFail, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);        
        }

        public static void BannerHide(string placement, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Banner;
            ev.adEventType = AdEventType.Hide;

            ev.AddParam(EventParam.placement, placement);
            
            Engagement.TryFireEvent(EngagementEvent.BannerHide, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void InterstitialLoad(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Interstitial;
            ev.adEventType = AdEventType.Loaded;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);

            Engagement.TryFireEvent(EngagementEvent.InterstitialLoad, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void InterstitialLoadFail(string network = "unknown", AdErrorType reason = AdErrorType.Undefined,
            int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Interstitial;
            ev.adEventType = AdEventType.LoadFail;

            ev.AddParam(EventParam.placement, "no_placement");
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.adErrorType, reason);
            
            Engagement.TryFireEvent(EngagementEvent.InterstitialLoadFail, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void InterstitialShow(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Interstitial;
            ev.adEventType = AdEventType.Show;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.InterstitialShow, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void InterstitialShowFail(string placement, string network = "unknown", int? level = null,
            AdErrorType reason = AdErrorType.Undefined, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Interstitial;
            ev.adEventType = AdEventType.ShowFail;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.adErrorType, reason);

            Engagement.TryFireEvent(EngagementEvent.InterstitialShowFail, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void InterstitialStart(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Interstitial;
            ev.adEventType = AdEventType.Show;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.InterstitialStart, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void InterstitialEnd(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Interstitial;
            ev.adEventType = AdEventType.Hide;

            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.InterstitialEnd, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void InterstitialClick(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.Interstitial;
            ev.adEventType = AdEventType.Clicked;

            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.InterstitialClick, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void RewardVideoLoad(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.Loaded;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.RewardVideoLoad, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }


        public static void RewardVideoLoadFail(string network = "unknown", int? level = null,
            AdErrorType reason = AdErrorType.Undefined, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.LoadFail;
               
            ev.AddParam(EventParam.placement, "no_placement");
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.adErrorType, reason);

            Engagement.TryFireEvent(EngagementEvent.RewardVideoLoadFail, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void RewardVideoShow(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.Show;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.RewardVideoShow,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void RewardVideoShowFail(string placement, string network = "unknown",
            AdErrorType reason = AdErrorType.Undefined, int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.ShowFail;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.adErrorType, reason);

            Engagement.TryFireEvent(EngagementEvent.RewardVideoShowFail,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void RewardVideoStart(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.Show;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);

            Engagement.TryFireEvent(EngagementEvent.RewardVideoStart,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
            
        }

        public static void RewardVideoEnd(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.Hide;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);

            Engagement.TryFireEvent(EngagementEvent.RewardVideoEnd,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void RewardVideoClick(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.Clicked;

            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.missionID, level);

            Engagement.TryFireEvent(EngagementEvent.RewardVideoClick,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void RewardVideoCollect(string placement, object reward = null, int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.RV;
            ev.adEventType = AdEventType.RewardRecieved;

            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.reward, reward);

            Analytics.RewardVideo.TryLogRewardVideoCollect();

            Engagement.TryFireEvent(EngagementEvent.RewardVideoCollect,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }


        public static void CrossPromoLoad(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.CrossPromo;
            ev.adEventType = AdEventType.Loaded;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.CrossPromoLoad, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }
        

        public static void CrossPromoLoadFail(string network = "unknown", int? level = null,
            AdErrorType reason = AdErrorType.Undefined, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.CrossPromo;
            ev.adEventType = AdEventType.LoadFail;
               
            ev.AddParam(EventParam.placement, "no_placement");
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.adErrorType, reason);

            Engagement.TryFireEvent(EngagementEvent.CrossPromoLoadFail, additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

         public static void CrossPromoShow(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.CrossPromo;
            ev.adEventType = AdEventType.Show;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            
            Engagement.TryFireEvent(EngagementEvent.CrossPromoShow,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void CrossPromoShowFail(string placement, string network = "unknown",
            AdErrorType reason = AdErrorType.Undefined, int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.CrossPromo;
            ev.adEventType = AdEventType.ShowFail;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.adErrorType, reason);

            Engagement.TryFireEvent(EngagementEvent.CrossPromoShowFail,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void CrossPromoStart(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.CrossPromo;
            ev.adEventType = AdEventType.Show;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);

            Engagement.TryFireEvent(EngagementEvent.CrossPromoStart,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
            
        }

        public static void CrossPromoEnd(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.CrossPromo;
            ev.adEventType = AdEventType.Hide;
            
            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.missionID, level);
            ev.AddParam(EventParam.adProvider, network);

            Engagement.TryFireEvent(EngagementEvent.CrossPromoEnd,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }

        public static void CrossPromoClick(string placement, string network = "unknown", int? level = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adType = AdType.CrossPromo;
            ev.adEventType = AdEventType.Clicked;

            ev.AddParam(EventParam.placement, placement);
            ev.AddParam(EventParam.adProvider, network);
            ev.AddParam(EventParam.missionID, level);

            Engagement.TryFireEvent(EngagementEvent.CrossPromoClick,additionalData);
            LionAnalytics.LogEvent(ev, false, additionalData);
        }




        #endregion

        #region IAPEvents

        //Add a Transaction method to attach transaction ID to it
        public static void InAppPurchase(string purchaseName, Product spentProducts, Product recievedProducts, 
            string purchaseLocation = "General", string productID = null, string transactionID = null, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.IAP;

            Transaction transaction = new Transaction(purchaseName, "Purchase", recievedProducts, spentProducts, transactionID);
            InAppPurchase(transaction, additionalData);
        }

        public static void InAppPurchase(Transaction transaction, Dictionary<string, object> additionalData = null, string productID = null, string transactionID = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.IAP;
            ev.iapEventType = IAPEventType.Purchase;


            ev.AddParam(EventParam.transaction, transaction);
            Engagement.TryFireEvent(EngagementEvent.InAppPurchase,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void InAppPurchase(int virtualCurrencyAmount, string virtualCurrencyName, string virtualCurrencyType, string realCurrencyType, float realCurrencyAmount, string purchaseName,
            string productID = null, string transactionID = null, Dictionary<string, object> additionalData = null)
        {
            Product received = new Product();
            received.AddVirtualCurrency(new VirtualCurrency(virtualCurrencyName, virtualCurrencyType,
                virtualCurrencyAmount));

            Product spent = new Product();
            spent.AddRealCurrency(new RealCurrency(realCurrencyType, realCurrencyAmount));

            Transaction transaction = new Transaction(purchaseName, "Purchase", received, spent, transactionID);

            InAppPurchase(transaction, additionalData);
        }

        public static void InAppPurchaseWithReciept(int amount, string itemType, string itemId,
            string purchaseLocation = "General", string currencyType = "USD", Dictionary<string, object> additionalData = null)
        {
            throw new NotImplementedException("IAP Receipt events not implemented, yet!");
        }

        #endregion

        #region Debugging Events

        public static void DebugEvent(string message, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Debug;
            ev.AddParam(EventParam.message, message);

            Engagement.TryFireEvent(EngagementEvent.DebugEvent,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void ErrorEvent(ErrorEventType errorType, string message, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Error;

            ev.AddParam(EventParam.message, message);
            ev.AddParam(EventParam.errorType, errorType);

            Engagement.TryFireEvent(EngagementEvent.ErrorEvent,additionalData);
            LogEvent(ev, false, additionalData);
        }

        internal static void Heartbeat()
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Heartbeat;
            LogEvent(ev);
        }

        #endregion

        #region ML Events
        public static void PredictionResult(string modelName, string modelVersion, object modelInput,
            object modelOutput, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.ML;
            
            ev.AddParam(EventParam.modelName, modelName);
            
            ev.eventParams = new Dictionary<string, object>()
            {
                {EventParam.modelName, modelName},
                {EventParam.modelVersion, modelVersion},
                {EventParam.modelInput, modelInput},
                {EventParam.modelOutput, modelOutput}
            };

            Engagement.TryFireEvent(EngagementEvent.PredictionResult,additionalData);
            LogEvent(ev, false, additionalData);
        }

        #endregion
        
        #region Experiment Events

        public static void AbCohort(string experimentName, string experimentCohort,
            Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.ABTest;

            ev.AddParam(EventParam.experimentName, experimentName);
            ev.AddParam(EventParam.experimentCohort, experimentCohort);

            Engagement.TryFireEvent(EngagementEvent.AbCohort,additionalData);
            LogEvent(ev, false, additionalData);
        }

        #endregion

        #region Mission Events

        public static void MissionStarted(bool isTutorial, string missionType, string missionName, string missionID,
            int missionAttempt, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Mission;
            ev.missionEventType = MissionEventType.Start;
            
            ev.AddParam(EventParam.isTutorial, isTutorial);
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);
            ev.AddParam(EventParam.missionID, missionID);
            ev.AddParam(EventParam.missionAttempt, missionAttempt);
            
            Engagement.TryFireEvent(EngagementEvent.MissionStarted,missionName,additionalData);
            LogEvent(ev, false, additionalData);
            
        }

        public static void MissionCompleted(bool isTutorial, string missionType, string missionName, string missionID,
            int missionAttempt, int userScore, Dictionary<string, object> additionalData = null, Reward reward = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Mission;
            ev.missionEventType = MissionEventType.Completed;
            
            ev.AddParam(EventParam.isTutorial, isTutorial);
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);
            ev.AddParam(EventParam.missionID, missionID);
            ev.AddParam(EventParam.missionAttempt, missionAttempt);
            ev.AddParam(EventParam.userScore, userScore);
            ev.AddParam(EventParam.reward, reward);
            
            Engagement.TryFireEvent(EngagementEvent.MissionCompleted,missionName,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void MissionFailed(bool isTutorial, string missionType, string missionName, string missionID,
            int missionAttempt, int userScore, Dictionary<string, object> additionalData = null,
            string terminationReason = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Mission;
            ev.missionEventType = MissionEventType.Failed;
            
            ev.AddParam(EventParam.isTutorial, isTutorial);
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);
            ev.AddParam(EventParam.missionID, missionID);
            ev.AddParam(EventParam.missionAttempt, missionAttempt);
            ev.AddParam(EventParam.userScore, userScore);
            ev.AddParam(EventParam.terminationReason, terminationReason);
            
            Engagement.TryFireEvent(EngagementEvent.MissionFailed,missionName,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void MissionStep(bool isTutorial, string missionType, string missionName, string missionID,
            int missionAttempt, int userScore, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Mission;
            ev.missionEventType = MissionEventType.Step;
            
            ev.AddParam(EventParam.isTutorial, isTutorial);
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);
            ev.AddParam(EventParam.missionID, missionID);
            ev.AddParam(EventParam.missionAttempt, missionAttempt);
            ev.AddParam(EventParam.userScore, userScore);
            
            Engagement.TryFireEvent(EngagementEvent.MissionStep,missionName,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void MissionAbandoned(bool isTutorial, string missionType, string missionName, string missionID,
            int missionAttempt, int userScore, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Mission;
            ev.missionEventType = MissionEventType.Abandoned;
            
            ev.AddParam(EventParam.isTutorial, isTutorial);
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionName, missionName);
            ev.AddParam(EventParam.missionID, missionID);
            ev.AddParam(EventParam.missionAttempt, missionAttempt);
            ev.AddParam(EventParam.userScore, userScore);
            
            Engagement.TryFireEvent(EngagementEvent.MissionAbandoned,missionName,additionalData);
            LogEvent(ev, false, additionalData);
        }

        #endregion
        
        public static void ItemCollected(Reward reward, Dictionary<string, object> additionalData = null)
        {

            LionGameEvent ev = new LionGameEvent();

            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.ItemCollected;

            ev.AddParam(EventParam.reward, reward);

            Engagement.TryFireEvent(EngagementEvent.ItemCollected,additionalData);
            LogEvent(ev, false, additionalData);
            
        }

        public static void ShopEntered(string shopName, string shopID = null, string shopType = null, Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.ShopEntered;
            
            ev.AddParam(EventParam.shopName, shopName);
            ev.AddParam(EventParam.shopID, shopID);
            ev.AddParam(EventParam.shopType, shopType);

            Engagement.TryFireEvent(EngagementEvent.ShopEntered,additionalData);
            LogEvent(ev, false, additionalData);
        }
        
        public static void Achievement(Reward reward, string achievementID, string achievementName, Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.Achievement;
            
            ev.AddParam(EventParam.reward, reward);
            ev.AddParam(EventParam.achievementID, achievementID);
            ev.AddParam(EventParam.achievementName, achievementName);

            Engagement.TryFireEvent(EngagementEvent.Achievement,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void SocialConnect(string connectedUserId,
        string socialAlias = null, string socialPlatform = null, Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Social;
            ev.socialEventType = SocialEventType.Connection;

            ev.AddParam(EventParam.connectedUserId, connectedUserId);
            ev.AddParam(EventParam.socialAlias, socialAlias);
            ev.AddParam(EventParam.socialPlatform, socialPlatform);

            Engagement.TryFireEvent(EngagementEvent.SocialConnect,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void UiInteraction(string eventName, string platform = null,
        string uiAction = null, string uiLocation = null,
        string uiName = null, string uiType = null, Dictionary<string, object> additionalData = null)
        {

            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.UIInteraction;
            
            ev.AddParam(EventParam.platform, platform);
            ev.AddParam(EventParam.uiAction, uiAction);
            ev.AddParam(EventParam.uiLocation, uiLocation);
            ev.AddParam(EventParam.uiName, uiName);
            ev.AddParam(EventParam.uiType, uiType);

            Engagement.TryFireEvent(EngagementEvent.UiInteraction,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void LevelAbandoned(string missionID, string missionName, string missionType, int missionAttempt,
        int userScore, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Level;
            ev.levelEventType = LevelEventType.Abandon;

            ev.AddParam(EventParam.missionID, missionID);
            ev.AddParam(EventParam.missionName, missionName);
            ev.AddParam(EventParam.missionType, missionType);
            ev.AddParam(EventParam.missionAttempt, missionAttempt);
            ev.AddParam(EventParam.userScore, userScore);

            Engagement.TryFireEvent(EngagementEvent.LevelAbandoned,additionalData);
            LogEvent(ev,false ,additionalData);
        }

        public static void SkillUpgraded(int currentSkillLevel, int newSkillLevel, string skillId, string skillName, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.SkillUpgraded;

            ev.AddParam(EventParam.currentSkillLevel, currentSkillLevel);
            ev.AddParam(EventParam.newSkillLevel, newSkillLevel);
            ev.AddParam(EventParam.skillId, skillId);
            ev.AddParam(EventParam.skillName,skillName);

            Engagement.TryFireEvent(EngagementEvent.SkillUpgraded,additionalData);
            LogEvent(ev, false, additionalData);

        }

        public static void CharacterUpdated(string characterClass, string characterName, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.CharacterUpdated;

            ev.AddParam(EventParam.characterClass, characterClass);
            ev.AddParam(EventParam.characterName,characterName);

            Engagement.TryFireEvent(EngagementEvent.CharacterUpdated,additionalData);
            LogEvent(ev, false, additionalData);
        }


        public static void AdjustAttribution(string acquisitionChannel, string adjAttrAdgroup = null, string adjAttrCampaign = null,
        float? adjAttrCostAmount = null, string adjAttrCostCurrency = null, string adjAttrCostType = null,
        string adjAttrCreative = null, Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Ad;
            ev.adEventType = AdEventType.Loaded;
            
            ev.AddParam(EventParam.acquisitionChannel,acquisitionChannel);
            ev.AddParam(EventParam.adjAttrAdgroup, adjAttrAdgroup);
            ev.AddParam(EventParam.adjAttrCampaign,adjAttrCampaign);
            ev.AddParam(EventParam.adjAttrCostAmount,adjAttrCostAmount);
            ev.AddParam(EventParam.adjAttrCostCurrency,adjAttrCostCurrency);
            ev.AddParam(EventParam.adjAttrCostType,adjAttrCostType);
            ev.AddParam(EventParam.adjAttrCreative,adjAttrCreative);
            
            Engagement.TryFireEvent(EngagementEvent.AdjustAttribution,additionalData);
            LogEvent(ev, false, additionalData);
        }
        
        public static void GiftSent(Reward gift, string recipientID, string uniqueTracking = null,
            Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.GiftSent;
            
            ev.AddParam(EventParam.reward, gift);
            ev.AddParam(EventParam.recipientID, recipientID);
            ev.AddParam(EventParam.uniqueTracking, uniqueTracking);
            
            Engagement.TryFireEvent(EngagementEvent.GiftSent,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void GiftReceived(Reward gift,string senderID, bool giftAccepted = false, string uniqueTracking = null, 
            Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.GiftReceived;

            ev.AddParam(EventParam.reward, gift);
            ev.AddParam(EventParam.senderID, senderID);
            ev.AddParam(EventParam.giftAccepted,giftAccepted);
            ev.AddParam(EventParam.uniqueTracking, uniqueTracking);

            Engagement.TryFireEvent(EngagementEvent.GiftReceived, additionalData);

            LogEvent(ev, false, additionalData);
        }


        public static void InviteSent(string uniqueTracking = null, string inviteType = null,
            string[] recipients = null, Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Social;
            ev.socialEventType = SocialEventType.InviteSent;
            
            ev.AddParam(EventParam.uniqueTracking, uniqueTracking);
            ev.AddParam(EventParam.inviteType, inviteType);
            ev.AddParam(EventParam.recipients, recipients);
            
            Engagement.TryFireEvent(EngagementEvent.InviteSent,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void InviteReceived(string senderID, string uniqueTracking = null,
            string inviteType = null, bool? isInviteAccepted = null, Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Social;
            ev.socialEventType = SocialEventType.InviteReceived;
            
            ev.AddParam(EventParam.senderID, senderID);
            ev.AddParam(EventParam.uniqueTracking, uniqueTracking);
            ev.AddParam(EventParam.inviteType, inviteType);
            ev.AddParam(EventParam.isInviteAccepted, isInviteAccepted);

            Engagement.TryFireEvent(EngagementEvent.InviteReceived,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void PowerUpUsed(string missionID,string missionType, int missionAttempt, string powerUpName, Dictionary<string, object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.PowerUp;

            ev.AddParam(EventParam.missionID, missionID);
            ev.AddParam(EventParam.missionType,missionType);
            ev.AddParam(EventParam.missionAttempt, missionAttempt);
            ev.AddParam(EventParam.powerUpName,powerUpName);

            Engagement.TryFireEvent(EngagementEvent.PowerUpUsed,additionalData);
            LogEvent(ev, false, additionalData);
        }


        public static void Social(string socialType,Dictionary<string, object> additionalData = null){
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Social;
            ev.socialEventType = SocialEventType.Connection;

            ev.AddParam(EventParam.socialType,socialType);

            Engagement.TryFireEvent(EngagementEvent.Social,additionalData);
            LogEvent(ev, false, additionalData);
        
        }

        public static void NewPlayer(Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Game;
            ev.gameEventType = GameEventType.Started;
            
            ev.AddParam(EventParam.deviceId, SystemInfo.deviceUniqueIdentifier);

            Engagement.TryFireEvent(EngagementEvent.NewPlayer,additionalData);
            LogEvent(ev, false, additionalData);
        }

        public static void GameEnded(Dictionary<string,object> additionalData = null)
        {
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.Game;
            ev.gameEventType = GameEventType.Ended;

            Engagement.TryFireEvent(EngagementEvent.GameEnded,additionalData);
            LogEvent(ev, false, additionalData);
        }


        public static void FeatureUnlocked(string eventName, string featureName, string featureType, Dictionary<string, object> additionalData = null)
        {  
            LionGameEvent ev = new LionGameEvent();
            ev.eventType = EventType.InGame;
            ev.inGameEventType = InGameEventType.FeatureUnlocked;
            
            ev.AddParam(EventParam.missionName, eventName);
            ev.AddParam(EventParam.featureName, featureName);
            ev.AddParam(EventParam.featureType,featureType);

            Engagement.TryFireEvent(EngagementEvent.FeatureUnlocked,additionalData);
            LogEvent(ev, false, additionalData);
        }
        
        #region Currency
        /// <summary>
        ///  Sets the "soft currency" of a player. It's an in-game/virtual currency earned
        /// through gameplay (not exchanged for real currency).
        /// </summary>
        public static void SetSoftCurrency(int softCurrency)
        {
            LionAnalytics.softCurrency = softCurrency;
        }
        
        /// <summary>
        /// Sets the "hard currency" of a player. It's an in-game/virtual currency purchased with real currency.
        /// </summary>
        public static void SetHardCurrency(int hardCurrency)
        {
            LionAnalytics.hardCurrency = hardCurrency;
        }
        #endregion

        #region Build Information
        /// <summary>
        /// Sets the full build version (accommodates any length)
        /// </summary>
        public static void SetBuildVersion(string buildVersion)
        {
            LionAnalytics.buildVersion = buildVersion;
        }
        #endregion

        public void OnInitialize(LionCoreContext ctx)
        {
            //Create default cpe events
             Engagement.RegisterEngagementEvent(EngagementEvent.LevelComplete, 
                 new Milestone[]
                 {
                     new Milestone(5, "level_complete_5"), 
                 });
             
             Engagement.RegisterEngagementEvent(EngagementEvent.RewardVideoShow, 
                 new Milestone[]
                 {
                     new Milestone(1, "watch_rewarded_1"),
                     new Milestone(2, "watch_rewarded_2"),
                     new Milestone(3, "watch_rewarded_3"),
                     new Milestone(5, "watch_rewarded_5"),
                     new Milestone(15, "watch_rewarded_15"),
                 });
        }
    }
}