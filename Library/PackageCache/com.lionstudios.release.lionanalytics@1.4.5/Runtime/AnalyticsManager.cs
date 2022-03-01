using System.Collections;
using System.Collections.Generic;
using LionStudios.Runtime.Sdk;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using UnityEngine;
using LionSdkService = LionStudios.Runtime.Sdk.LionSdkService;

namespace LionStudios.Suite.Analytics
{
    internal static class AnalyticsManager
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        private static void OnAppStart()
        {
            LionAnalytics.OnLogEvent += LogEvent;
            LionSdkService.GetRuntimeSdkInfos();
        }
        
        private static void LogEvent(LionGameEvent gameEvent, bool isUAEvent, params Runtime.Sdk.SdkId[] exclusiveTo)
        {
            List<SdkId> fireToSdks = new List<SdkId>(exclusiveTo);
            
            // fire ua events to adjust and firebase
            if (isUAEvent)
            {
                if(!fireToSdks.Contains(SdkId.Adjust)) fireToSdks.Add(SdkId.Adjust);
                if(!fireToSdks.Contains(SdkId.Firebase)) fireToSdks.Add(SdkId.Firebase);
            }
            else
            {
                // always fire to adjust
                if(!fireToSdks.Contains(SdkId.Adjust)) fireToSdks.Add(SdkId.Adjust);

                LionAnalyticsSettings settings = LionSettingsService.GetSettings<LionAnalyticsSettings>();
                if (settings != null)
                {
                    if (settings.enableFirebaseEvents && !fireToSdks.Contains(SdkId.Firebase)) fireToSdks.Add(SdkId.Firebase);
                    if (settings.enableDeltaDnaEvents && !fireToSdks.Contains(SdkId.DeltaDNA)) fireToSdks.Add(SdkId.DeltaDNA);
                    if (settings.enableGameAnalyticsEvents && !fireToSdks.Contains(SdkId.GameAnalytics)) fireToSdks.Add(SdkId.GameAnalytics);
                }
                else
                {
                    LionDebug.LogWarning("Failed to fire event, settings not found!");
                }
            }

            for (int i = 0; i < fireToSdks.Count; i++)
            {
                AnalyticsSdkBridge.TryThrowSdkEvent(fireToSdks[i], gameEvent);
            }
        }
    }
}