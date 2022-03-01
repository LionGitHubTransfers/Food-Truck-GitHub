using UnityEngine;
using System;
using System.Linq;
using LionStudios.Suite.Debugging;
using UnityEngine.Scripting;

[assembly: Preserve]
namespace LionStudios.Suite.Core
{
    public enum Platform
    {
        iOS,
        Android
    }

    public class LionCore : ILionSettingsProvider
    {
        public const string LK_AUTO_UPDATE_ENABLED_KEY = "com.lionstudios.auto_update_enabled";
        public const string LK_LAST_INSTALL_VERSION = "com.lionstudios.lk_last_install_version";
        public const string DirName = "LionStudios";
        public const string AssetDir = "Assets/" + DirName + "/Resources/";

        public static bool IsInitialized { get; private set; }
        internal static LionApplicationHandle HNDL { get; private set; }

        /// <summary>
        /// Called after LionKit has initialized all SDK and Settings Providers
        /// </summary>
        public static Action OnInitialized;

        private static string _version = "1.9.147";
        public static string Version
        {
            get
            {
                if (string.IsNullOrEmpty(_version))
                {
                    PackageUtility.PackageInfo pkg = PackageUtility.GetPackageInfo("lionstudios", "lionkitcore");
                    if (pkg != null)
                    {
                        string v = pkg.version;
                        if (!string.IsNullOrEmpty(v))
                        {
                            _version = v;
                        }
                    }
                }

                return _version;
            }
        }

        private static string _packageId = "com.lionstudios.release.lionkitcore";
        public static string PackageId
        {
            get
            {
                if (string.IsNullOrEmpty(_packageId))
                {
                    string pkgId = PackageUtility.GetFullPackageIdentifier("lionstudios", "lionkitcore");
                    if (!string.IsNullOrEmpty(pkgId))
                    {
                        _packageId = pkgId;
                    }
                }

                return _packageId;
            }
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void OnAppInitialize()
        {
            HNDL = new GameObject("Lion Application Handle")
                .AddComponent<LionApplicationHandle>();
            GameObject.DontDestroyOnLoad(HNDL.gameObject);

            Initialize();
        }

        /// <summary>
        /// Initializes LionKit and internal SDKS AppLovin MAX and Google Firebase (if enabled).
        /// </summary>
        public static void Initialize()
        {
            float initStartTime = Time.time;
            LionDebug.Log($"Initializing Lion Kit v{Version}...",
                LionDebug.DebugLogLevel.Default);

            if (IsInitialized)
            {
                LionDebug.Log("Lion Kit already initialized. Aborting.",
                    LionDebug.DebugLogLevel.Default);
                return;
            }
            
            // init settings
            LionSettingsService.InitializeService();
            LionCoreContext context = GetContext();

            // do pre-init
            ILionSdk[] _sdks = LionSdkService.SdkCache.OrderBy((x) => { return x.Priority; }).ToArray();
            foreach(ILionSdk sdk in _sdks)
            {
                sdk.OnPreInitialize(context);
            }

            // initialize lion core modules
            ILionModule[] _modules = LionModuleService.ModuleCache.OrderBy((x) => { return x.Priority; }).ToArray();
            foreach (ILionModule module in _modules)
            {
                module.OnInitialize(context);
            }

            // do init
            foreach (ILionSdk sdk in _sdks)
            {
                sdk.OnInitialize(context);
            }

            // do post init
            foreach (ILionSdk sdk in _sdks)
            {
                sdk.OnPostInitialize(context);
            }
            
            IsInitialized = true;
            OnInitialized?.Invoke();
            LionDebug.Log($"Lion Kit v{Version} initialized in {Time.time - initStartTime}s ...",
                LionDebug.DebugLogLevel.Default);

            LionDebug.LionDebugSettings debugSettings = 
                LionSettingsService.GetSettings<LionDebug.LionDebugSettings>();
            #if UNITY_EDITOR || DEVELOPMENT_BUILD
            if (debugSettings.debuggerEnabled)
            {
                LionDebugger.Show();
            } else
            {
                LionDebugger.Hide();   
            }
            #endif
        }

        public static LionCoreContext GetContext()
        {
            LionCoreContext context = null;
            context = new LionCoreContext(
                _sdks: LionSdkService.SdkCache,
                _modules: LionModuleService.ModuleCache,
                _settings: LionSettingsService.GetAllSettings());
            return context;
        }

        public static void ClearServiceCache()
        {
            LionModuleService.ClearCache();
            LionSdkService.ClearCache();
            LionSettingsService.ClearCache();
        }

        #region Settings
        private static LionKitCoreSettings _settings = new LionKitCoreSettings();
        [Serializable]
        public sealed class LionKitCoreSettings : ILionSettingsInfo
        {
            #region ANDROID SETTINGS
            [Header("Android Settings")]
            [SerializeField] public bool _UseMultiDexSupport = true;
            [SerializeField] public bool _UseProGuard = true;
            [SerializeField] public bool _OverrideGradlePluginVersion = false;
            [SerializeField] public string _GradlePluginOverride;
            #endregion
        }

        public ILionSettingsInfo GetSettings()
        {
            if (_settings == null)
            {
                _settings = new LionKitCoreSettings();
            }
            return _settings;
        }

        public void ApplySettings(ILionSettingsInfo newSettings)
        {
            if (newSettings is LionKitCoreSettings)
            {
                _settings = (LionKitCoreSettings)newSettings;
            }
        }

        #endregion
    }
}