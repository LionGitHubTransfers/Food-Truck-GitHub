using System;
using System.Collections.Generic;
using System.Text;

namespace LionStudios.Suite.Analytics
{
    internal class AdjustEvent
    {
        public const string undefined = "undefined";
        public const string game_started = "game_started";
        public const string game_ended = "game_ended";
        public const string LevelStarted = "level_start";
        public const string LevelComplete = "level_complete";
        public const string LevelFail = "level_fail";
        public const string LevelRetry = "level_restart";
        public const string LevelAbandoned = "level_abandoned";
        internal const string Heartbeat = "heartbeat";
        internal const string FunnelEvent = "funnel_event";
        internal const string ErrorEvent = "error_event";
        internal const string DebugEvent = "debug_event";
        
        internal const string AbCohort = "ab_cohort";

        // ADS
        public const string banner_load = "banner_load";
        public const string banner_load_fail = "banner_load_fail";
        public const string banner_show = "banner_show";
        public const string banner_show_fail = "banner_show_fail";
        public const string banner_hide = "banner_hide";

        public const string interstitial_show = "interstitial_show";
        public const string interstitial_show_fail = "interstitial_show_fail";
        public const string interstitial_load = "interstitial_load";
        public const string interstitial_load_fail = "interstitial_load_fail";
        public const string interstitial_begin = "interstitial_start";
        public const string interstitial_end = "interstitial_end";
        public const string interstitial_clicked = "interstitial_clicked";

        public const string reward_video_show = "rv_show";
        public const string reward_video_show_fail = "rv_show_fail";
        public const string reward_video_load = "rv_load";
        public const string reward_video_load_fail = "rv_load_fail";
        public const string reward_video_begin = "rv_start";
        public const string reward_video_end = "rv_end";
        public const string reward_video_reward = "rv_collect";
        public const string reward_video_clicked = "rv_clicked";

        // IAP
        public const string iap_purchase = "inapp_purchase";
        public const string iap_returned = "iap_return";

        public const string Prediction = "prediction_result";

        // Mission
        public const string MissionStarted = "mission_started";
        public const string MissionComplete = "mission_complete";
        public const string MissionFail = "mission_fail";
        public const string MissionRetry = "mission_retry";
        public const string MissionAbandoned = "mission_abandoned";
        public const string MissionStep = "mission_step";

        // InGame
        public const string ItemCollected = "item_collected";
        public const string ShopEntered = "shop_entered";
        public const string SkillUpgraded = "skill_upgraded";
        public const string CharacterUpdated = "character_updated";
        public const string PowerUp = "powerup_used";
        public const string FeatureUnlocked = "feature_unlocked";
        public const string GiftSent = "gift_sent";
        public const string GiftReceived = "gift_received";
        public const string Achievement = "achievement";
        public const string UIInteraction = "ui_interaction";

        // Social
        public const string InviteSent = "invite_sent";
        public const string InviteReceived = "invite_received";
        public const string Connection = "social_connect";


        private static readonly Dictionary<string, string> AdjustParamsDict = new Dictionary<string, string>()
        {
            {EventParam.missionID, "level_num" },
            {EventParam.missionAttempt, "level_attempt" },
            {EventParam.userScore, "level_score" },
        };

        public static string GetEventToken(LionGameEvent ev)
        {
            string customEvId = ev.TryGetParam<string>(EventParam.customEventToken);
            if (string.IsNullOrEmpty(customEvId))
            {
                customEvId = "custom_event";
            }
            return customEvId;
        }

        public static string GetEventName(LionGameEvent ev)
        {
            switch (ev.eventType)
            {
                case EventType.Game:
                    return GetGameEventName(ev.gameEventType);
                case EventType.Level:
                    return GetLevelEventName(ev.levelEventType);
                case EventType.Mission:
                    return GetMissionEventName(ev.missionEventType);                    
                case EventType.InGame:
                    return GetInGameEventName(ev.inGameEventType);
                case EventType.Social:
                    return GetSocialEventName(ev.socialEventType);         
                case EventType.Ad:
                    return GetAdEventName(ev.adType, ev.adEventType);
                case EventType.IAP:
                    return GetIapEventName(ev.iapEventType);
                case EventType.Debug:
                    return DebugEvent;
                case EventType.Error:
                    return ErrorEvent;
                case EventType.Heartbeat:
                    return Heartbeat;
                case EventType.Funnel:
                    return FunnelEvent;
                case EventType.ABTest:
                    return AbCohort;
                case EventType.ML:
                    return Prediction;
                default:
                    return ev.eventName;
            }
        }

        public static string LionParamToAdjustParam(string eventParam)
        {
            return AdjustParamsDict.ContainsKey(eventParam)
                ? AdjustParamsDict[eventParam] : eventParam.ToString().ToSnakeCase();
        }

        private static string GetGameEventName(GameEventType evType)
        {
            switch (evType)
            {
                case GameEventType.Started:
                    return game_started;
                case GameEventType.Ended:
                    return game_ended;
            }
            return null;
        }

        private static string GetLevelEventName(LevelEventType evType)
        {
            switch (evType)
            {
                case LevelEventType.Start:
                    return LevelStarted;
                case LevelEventType.Complete:
                    return LevelComplete;
                case LevelEventType.Fail:
                    return LevelFail;
                case LevelEventType.Restart:
                    return LevelRetry;
                case LevelEventType.Abandon:
                    return LevelAbandoned;
                default:
                    return undefined;
            }
        }

        private static string GetMissionEventName(MissionEventType evType)
        {
            switch (evType)
            {
                case MissionEventType.Start:
                    return MissionStarted;
                case MissionEventType.Completed:
                    return MissionComplete;
                case MissionEventType.Failed:
                    return MissionFail;
                case MissionEventType.Step:
                    return MissionStep;
                case MissionEventType.Abandoned:
                    return MissionAbandoned;                    
                case MissionEventType.Restart:
                    return MissionRetry;
                default:
                    return undefined;
            }
        }

        private static string GetInGameEventName(InGameEventType evType)
        {
            switch (evType)
            {
                case InGameEventType.ItemCollected:
                    return ItemCollected;
                case InGameEventType.ShopEntered:
                    return ShopEntered;
                case InGameEventType.SkillUpgraded:
                    return SkillUpgraded;
                case InGameEventType.CharacterUpdated:
                    return CharacterUpdated;
                case InGameEventType.PowerUp:
                    return PowerUp;
                case InGameEventType.FeatureUnlocked:
                    return FeatureUnlocked;
                case InGameEventType.GiftSent:
                    return GiftSent;
                  case InGameEventType.Achievement:
                    return Achievement;
                case InGameEventType.UIInteraction:
                    return UIInteraction;
                case InGameEventType.GiftReceived:
                    return GiftReceived;
                default:
                    return undefined;
            }
        }

        private static string GetSocialEventName(SocialEventType evType)
        {
            switch (evType)
            {
                case SocialEventType.InviteSent:
                    return InviteSent;
                case SocialEventType.InviteReceived:
                    return InviteReceived;
                case SocialEventType.Connection:
                    return Connection;
                default:
                    return undefined;
            }
        }

        private static string GetAdEventName(AdType adType, AdEventType evType)
        {
            if (adType == AdType.Undefined) return undefined;

            string evName = adType.ToString().ToLower();

            switch (evType)
            {
                case AdEventType.Loaded:
                    return evName + "_load";
                case AdEventType.LoadFail:
                    return evName + "_load_fail";
                case AdEventType.Show:
                    return evName + "_show";
                case AdEventType.ShowFail:
                    return evName + "_show_fail";
                case AdEventType.Clicked:
                    return evName + "_clicked";
                case AdEventType.Hide:
                    return evName + "_hide";
                case AdEventType.RewardRecieved:
                    return evName + "_collect";
                default:
                    return $"{evName}_{undefined}";
            }
        }

        private static string GetIapEventName(IAPEventType evType)
        {
            switch (evType)
            {
                case IAPEventType.Purchase:
                    return iap_purchase;
                case IAPEventType.Return:
                    return iap_returned;
            }
            return undefined;
        }
    }
}