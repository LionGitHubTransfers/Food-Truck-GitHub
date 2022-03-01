using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using LionStudios.Runtime.Sdk;
using System.Text.RegularExpressions;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using System.Web;
using UnityEngine;
using UnityEngine.UIElements;
using LionSdkService = LionStudios.Runtime.Sdk.LionSdkService;

namespace LionStudios.Suite.Analytics
{
    public class AnalyticsSdkBridge
    {
        public const string ERR_TYPE_NOT_FOUND =
            "Type not found in any referenced assemblies. Make sure the package is installed and try again. If the problem persists contact Lion Support.";
        
        private Dictionary<SdkId, Sdk>  _sdks;

        private static AnalyticsSdkBridge _bridge;
        private static AnalyticsSdkBridge Bridge
        {
            get
            {
                if(_bridge == null)
                {
                    _bridge = new AnalyticsSdkBridge();
                }
                return _bridge;
            }
        }

        private AnalyticsSdkBridge()
        {
            Dictionary<SdkId, Sdk> foundSdks = new Dictionary<SdkId, Sdk>();
            LionSdkCollection sdkCollection = LionSdkService.GetRuntimeSdkInfos();
            LionAnalyticsSettings settings = LionCore.GetContext().GetSettings<LionAnalyticsSettings>();

            foreach(LionSdkInfo sdk in sdkCollection)
            {
                if (!sdk.IsInstalled || !sdk.IsSupported) continue;
                
                SdkId id = (SdkId)sdk.ID;
                Sdk newSdk = null;
                
                switch (id)
                {
                    case SdkId.Adjust:
                        newSdk = new Analytics.Adjust();
                        break;
                    case SdkId.DeltaDNA:
                        //newSdk = new Analytics.DeltaDNA();
                        break;
                    case SdkId.GameAnalytics:
                        newSdk = new Analytics.GameAnalytics();
                        break;
                    case SdkId.Firebase:
                        newSdk = new Analytics.Firebase();
                        break;
                }

                if(newSdk != null)
                {
                    foundSdks.Add(id, newSdk);
                    Debugging.Log($"Lion Analytics: Found SDK '{(SdkId)sdk.ID}'");
                }
            }

            _sdks = foundSdks;
        }

        public static void TryThrowSdkEvent(SdkId sdk, LionGameEvent gameEvent)
        {
            if (Bridge._sdks.ContainsKey(sdk))
            {
                Bridge._sdks[sdk].TryFireEvent(gameEvent);
            }
        }

        public static void TryThrowSdkEventAll(LionGameEvent gameEvent)
        {
            foreach (var sdk in Bridge._sdks.Values)
            {
                sdk.TryFireEvent(gameEvent);
            }
        }
        
        internal static Type GetType(string typeName)
        {
            try
            {
                var type = Type.GetType(typeName);
                if (type != null) return type;

                foreach (var a in AppDomain.CurrentDomain.GetAssemblies())
                {
                    type = a.GetType(typeName);
                    if (type != null)
                        return type;
                }

                throw new TypeLoadException($"Failed to find '{typeName}'. {ERR_TYPE_NOT_FOUND}");

            }catch(TypeLoadException typeEx)
            {
                LionDebug.LogException(typeEx);
            }

            return null;
        }
    }
}