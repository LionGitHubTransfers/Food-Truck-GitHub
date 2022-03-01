using System;
using System.Reflection;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    internal class Adjust : Sdk
    {
        const string adjustQualifiedName = "com.adjust.sdk.Adjust";
        const string adjustTrackEventMethodName = "trackEvent";
        const string adjustEventQualifiedName = "com.adjust.sdk.AdjustEvent";
        const string adjustEventAddParamMethodName = "addCallbackParameter";

        const string adjustNotFoundMessage = "Lion Analytics: Adjust not found or assembly inaccesible. Check SDK Service.";

        private Type adjustSdkType;
        private Type adjustEventType;

        private MethodInfo adjustAddCallbackParamMethod;
        private MethodInfo adjustTrackEventMethod;

        public Adjust()
        {
            RefreshMethodInfos();
        }

        private void RefreshMethodInfos()
        {
            var sdkType = AnalyticsSdkBridge.GetType(adjustQualifiedName);
            if (sdkType == null)
            {
                Debug.LogWarning(adjustNotFoundMessage);
                return;
            }

            adjustSdkType = sdkType;

            var eventType = AnalyticsSdkBridge.GetType(adjustEventQualifiedName);
            if (eventType == null)
            {
                Debug.LogWarning(adjustNotFoundMessage);
                return;
            }

            adjustEventType = eventType;

            var trackEventMethod = adjustSdkType.GetMethod(adjustTrackEventMethodName);
            if (trackEventMethod == null)
            {
                Debug.LogWarning(adjustNotFoundMessage);
                return;
            }

            adjustTrackEventMethod = trackEventMethod;
            
            var callbackParamMethod = adjustEventType.GetMethod(adjustEventAddParamMethodName);
            if (callbackParamMethod == null)
            {
                Debug.LogWarning(adjustNotFoundMessage);
                return;
            }

            adjustAddCallbackParamMethod = callbackParamMethod;
        }

        public override void TryFireEvent(LionGameEvent gameEvent)
        {

            if(adjustTrackEventMethod == null || adjustAddCallbackParamMethod == null
                || adjustEventType == null || adjustSdkType == null)
            {
                LionDebug.Log("Improper class definitions for Adjust bridge. Refreshing.", LionDebug.DebugLogLevel.Event);
                RefreshMethodInfos();
            }
            
            object adjustEvent = Activator.CreateInstance(adjustEventType, args: new object[]
            {
                AdjustEvent.GetEventToken(gameEvent)
            });

            string adjustEventName = AdjustEvent.GetEventName(gameEvent);
            object[] callbackParams = null;
            foreach (var kvp in gameEvent.eventParams)
            {
                var val = kvp.Value;
                if (val == null) continue;
                
                if (kvp.Key == EventParam.transaction
                    || kvp.Key == EventParam.reward
                    || kvp.Key == EventParam.productsReceived
                    || kvp.Key == EventParam.productsSpent
                    || kvp.Key == EventParam.rewardProducts
                    || kvp.Key == EventParam.gift)
                {
                    val = JsonUtility.ToJson(kvp.Value, true);
                }

                string adjustParamName = AdjustEvent.LionParamToAdjustParam(kvp.Key) ?? kvp.Key.ToString().ToSnakeCase();
                string adjustParamValue = val.ToString();

                callbackParams = new object[]
                {
                        adjustParamName,
                        adjustParamValue
                };

                adjustAddCallbackParamMethod.Invoke(adjustEvent, callbackParams);
            }

            // add additional adjust-specific params
            adjustAddCallbackParamMethod.Invoke(adjustEvent, new object[] { "evName", adjustEventName });
            adjustTrackEventMethod.Invoke(adjustSdkType, new object[] { adjustEvent });
            
            LionDebug.Log("Fired event to Adjust SDK", LionDebug.DebugLogLevel.Event);
        }
    }
}