using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LionStudios.Suite.Core
{
    internal class LionModuleService
    {
        private static ILionModule[] _moduleCache;
        internal static ILionModule[] ModuleCache
        {
            get
            {
                if (_moduleCache == null || _moduleCache.Length == 0)
                {
                    var cache = NamespaceUtil.GetObjectsOfType<ILionModule>();
                    _moduleCache = cache;

                    string msg = $"Lion Core: Module Cache initialized! {cache.Length} modules found.";
                    LionStudios.Suite.Debugging.LionDebug.Log(msg);
                }
                return _moduleCache;
            }
        }
        
        public static void ClearCache()
        {
            _moduleCache = null;
        }
    }
}
