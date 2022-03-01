using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;

namespace LionStudios.Suite.Analytics
{
    internal class GameAnalytics : Sdk
    {
        
        private enum InternalAdType
        {
            Undefined = 0,
            Video = 1,
            RewardedVideo = 2,
            Playable = 3,
            Interstitial = 4,
            OfferWall = 5,
            Banner = 6
        }

        public enum InternalAdAction
        {
            Undefined = 0,
            Clicked = 1,
            Show = 2,
            FailedShow = 3,
            RewardReceived = 4,
            Request = 5,
            Loaded = 6
        }

        public enum InternalErrorSeverity
        {
            Undefined = 0,
            Debug = 1,
            Info = 2,
            Warning = 3,
            Error = 4,
            Critical = 5
        }

        const string gameAnalyticsQualifiedName = "GameAnalyticsSDK.GameAnalytics";
        const string gameAnalyticsNotFoundMessage =
            "Lion Analytics: Game Analytics not found or assembly inaccesible. Check SDK Service.";

        const string AdEventMethodName = "NewAdEvent";
        const string BusinessEventNoReceiptMethodName = "NewBusinessEvent";
        const string ProgressionEventMethodName = "NewProgressionEvent";
        const string ErrorEventMethodName = "NewErrorEvent";
        const string DesignEventMethodName = "NewDesignEvent";

        private Type gameAnalyticsType;

        // event methods
        private MethodInfo adEventMethod;
        private MethodInfo adErrorEventMethod;
        private MethodInfo businessEventMethod;
        private MethodInfo progressionEventMethod;
        private MethodInfo errorEventMethod;
        private MethodInfo designEventMethod;

        internal bool IsInitialized { get; private set; }

        public GameAnalytics()
        {
            try
            {
                var sdkType = AnalyticsSdkBridge.GetType(gameAnalyticsQualifiedName);
                if (sdkType == null)
                {
                    Debug.LogWarning(gameAnalyticsNotFoundMessage);
                    return;
                }

                gameAnalyticsType = sdkType;
                businessEventMethod = gameAnalyticsType.GetMethods(BindingFlags.Static | BindingFlags.Public).Last(m => m.Name == BusinessEventNoReceiptMethodName);
                errorEventMethod       = gameAnalyticsType.GetMethods(BindingFlags.Static | BindingFlags.Public).First(m => m.Name == ErrorEventMethodName);
                designEventMethod      = gameAnalyticsType.GetMethods(BindingFlags.Static | BindingFlags.Public).First(m => m.Name == DesignEventMethodName && m.GetParameters().Length == 1);
                progressionEventMethod = gameAnalyticsType.GetMethods(BindingFlags.Static | BindingFlags.Public).Last(m => m.Name == ProgressionEventMethodName && m.GetParameters().Length == 5);

                foreach (var m in gameAnalyticsType.GetMethods(BindingFlags.Static | BindingFlags.Public).Where(m => m.Name == AdEventMethodName))
                {
                    if (adEventMethod == null)
                    {
                        if (m.GetParameters().Length == 4)
                        {
                            adEventMethod = m;
                        }
                    }

                    foreach (var p in m.GetParameters())
                    {
                        if (p.Name == "noAdReason")
                        {
                            adErrorEventMethod = m;
                        }
                    }
                }

                IsInitialized = adEventMethod != null
                                && businessEventMethod != null
                                && progressionEventMethod != null
                                && errorEventMethod != null
                                && designEventMethod != null;
            }
            catch (Exception e)
            {
                LionDebug.LogWarning(e.Message);
            }
        }

        public override void TryFireEvent(LionGameEvent gameEvent)
        {
            if (!IsInitialized)
            {
                LionStudios.Suite.Analytics.Debugging.LogWarning("GameAnalytics: Bridge not initialized! ");
                return;
            }
            
            if (!LionSettingsService.GetSettings<LionAnalyticsSettings>().enableGameAnalyticsEvents)
            {
                return;
            }

            switch (gameEvent.eventType)
            {
                case EventType.Level:
                    FireProgressionEvent(gameEvent);
                    break;

                case EventType.Ad:
                    FireAdEvent(gameEvent);
                    break;

                case EventType.IAP:
                    FireBusinessEvent(gameEvent);
                    break;

                case EventType.Error:
                    FireErrorEvent(gameEvent);
                    break;

                case EventType.Heartbeat:
                case EventType.Debug:
                    FireDesignEvent(gameEvent);
                    break;

                case EventType.Funnel:
                case EventType.Undefined:
                case EventType.ML:
                case EventType.ABTest:
                case EventType.Game:
                    // do nothing, yet.
                    break;
            }
            
            LionDebug.Log("Fired event to GameAnalytics SDK", LionDebug.DebugLogLevel.Event);
        }

        /// <summary>
        /// Throw new Design event
        /// GameAnalytics.NewDesignEvent(string eventName, float eventValue)
        /// </summary>
        /// <param name="gameEvent"></param>
        private void FireDesignEvent(LionGameEvent gameEvent)
        {
            LionStudios.Suite.Analytics.Debugging.LogEvent("GameAnalytics: Firing Design Event!");
            try
            {
                string msg = gameEvent.TryGetParam<string>(EventParam.message);
                if (string.IsNullOrEmpty(msg))
                {
                    msg = gameEvent.eventType.ToString();
                }

                designEventMethod?.Invoke(gameAnalyticsType, new object[] { msg });
            }
            catch (Exception e)
            {
                LionStudios.Suite.Analytics.Debugging.LogWarning(e.Message);
            }
        }

        private void FireAdEvent(LionGameEvent gameEvent)
        {
            LionStudios.Suite.Analytics.Debugging.LogEvent("GameAnalytics: Firing Ad Event!");

            try
            {
                int adAction = 0, adType = 0;
                string adSdkName = "", placement = "";

                switch (gameEvent.adEventType)
                {
                    case AdEventType.Loaded:
                        adAction = 6;
                        break;
                    case AdEventType.LoadFail:
                        adAction = 3;
                        break;
                    case AdEventType.Hide:
                        adAction = 0;
                        break;
                    default:
                        gameEvent.adEventType.GetHashCode();
                        break;
                }

                adType = gameEvent.adType.GetHashCode();
                adSdkName = gameEvent.TryGetParam<string>(EventParam.adProvider) ?? "unknown";
                placement = gameEvent.TryGetParam<string>(EventParam.placement) ?? "unknown";

                List<object> args = new List<object>();
                args.Add(adAction);
                args.Add(adType);
                args.Add(adSdkName);
                args.Add(placement);

                if (gameEvent.adEventType == AdEventType.LoadFail ||
                    gameEvent.adEventType == AdEventType.ShowFail)
                {
                    args.Add(gameEvent.TryGetParam<int>(EventParam.adErrorType));
                    adErrorEventMethod?.Invoke(gameAnalyticsType, args.ToArray());
                }
                else
                {
                    adEventMethod?.Invoke(gameAnalyticsType, args.ToArray());
                }
            }
            catch (Exception e)
            {
                LionStudios.Suite.Analytics.Debugging.LogWarning(e.Message);
            }
        }

        private void FireProgressionEvent(LionGameEvent gameEvent)
        {
            LionStudios.Suite.Analytics.Debugging.LogEvent("GameAnalytics: Firing Progression Event!");

            try
            {
                int progressionStatus = 0;
                int score = 0;
                string level0 = "";
                string level1 = "";
                string level2 = "";

                progressionStatus = gameEvent.levelEventType != LevelEventType.Restart ? gameEvent.levelEventType.GetHashCode() : 0;

                level0 = (string)gameEvent.TryGetParam<string>(EventParam.missionID) ?? "";
                level1 = (string)gameEvent.TryGetParam<string>(EventParam.levelCollection1) ?? "";
                level2 = (string)gameEvent.TryGetParam<string>(EventParam.levelCollection2) ?? "";
                score = (int)gameEvent.TryGetParam<int>(EventParam.userScore);

                List<object> args = new List<object>()
                {
                    progressionStatus,
                    level0,
                    level1,
                    level2,
                    score
                };

                progressionEventMethod?.Invoke(gameAnalyticsType, args.ToArray());
            }
            catch (Exception e)
            {
                LionStudios.Suite.Analytics.Debugging.LogWarning("GameAnalytics: Game Analytics event failed! " + e.Message);
            }
        }

        private void FireBusinessEvent(LionGameEvent gameEvent)
        {
            LionStudios.Suite.Analytics.Debugging.LogEvent("GameAnalytics: Business events not implemented!");
        }

        private void FireErrorEvent(LionGameEvent gameEvent)
        {
            LionStudios.Suite.Analytics.Debugging.LogEvent("GameAnalytics: Firing Error Event!");
            try
            {
                string errorMessage = null;
                int errorSeverity = 0;

                errorSeverity = gameEvent.TryGetParam<int>(EventParam.errorType);
                errorMessage = gameEvent.TryGetParam<string>(EventParam.message);

                errorEventMethod?.Invoke(gameAnalyticsType, new object[]
                {
                    errorSeverity, errorMessage
                });
            }
            catch (Exception e)
            {
                LionStudios.Suite.Analytics.Debugging.LogWarning(e.Message);
            }
        }
    }
}
