namespace LionStudios.Suite.Core
{
    public class LionCoreContext
    {
        public ILionSdk[] RegisteredSdks;
        public ILionModule[] RegisteredModules;
        public ILionSettingsInfo[] RegisteredSettings;

        internal LionCoreContext(ILionSdk[] _sdks, ILionModule[] _modules, ILionSettingsInfo[] _settings)
        {
            RegisteredSdks = _sdks;
            RegisteredModules = _modules;
            RegisteredSettings = _settings;
        }

        public T GetSdk<T>() where T : ILionSdk
        {
            foreach (var sdk in RegisteredSdks)
            {
                if (sdk.GetType() == typeof(T))
                {
                    return (T)sdk;
                }
            }
            return default(T);
        }

        public T GetSettings<T>() where T : ILionSettingsInfo
        {
            foreach (var setting in RegisteredSettings)
            {
                if (setting.GetType() == typeof(T))
                {
                    return (T)setting;
                }
            }

            return default(T);
        }

        public T GetModule<T>() where T : ILionModule
        {
            foreach (var module in RegisteredModules)
            {
                if (module.GetType() == typeof(T))
                {
                    return (T)module;
                }
            }

            return default(T);
        }
    }
}