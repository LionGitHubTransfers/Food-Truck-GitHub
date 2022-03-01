using System;
using System.Collections.Generic;
using LionStudios.Suite.Core;

namespace LionStudios.Suite.Core
{
    public sealed class LionSdkService
    {
        private static ILionSdk[] _sdkCache;
        public static ILionSdk[] SdkCache
        {
            get
            {
                if(_sdkCache == null || _sdkCache.Length == 0)
                {
                    var cache = NamespaceUtil.GetObjectsOfType<ILionSdk>();
                    _sdkCache = cache;

                    string msg = $"Lion Core: SDK Cache initialized! {cache.Length} SDKs found.";
                    LionStudios.Suite.Debugging.LionDebug.Log(msg);
                }
                return _sdkCache;
            }
        }

        public static T GetSdk<T>() where T : ILionSdk
        {
            foreach(var sdk in SdkCache)
            {
                if(sdk.GetType() == typeof(T)){
                    return (T)sdk;
                }
            }
            return default(T);
        }
        
        public static void ClearCache()
        {
            _sdkCache = null;
        }
    }
}