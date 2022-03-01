namespace LionStudios.Suite.Core
{
    public abstract class BaseLionSdk : ILionSdk
    {
        public int Priority { get; }
        
        public abstract ILionSettingsInfo GetSettings();
        public abstract void ApplySettings(ILionSettingsInfo newSettings);
        public abstract bool IsInitialized();
        
        public abstract string[] GetPrivacyLinks();

        public abstract void OnPreInitialize(LionCoreContext ctx);
        public abstract void OnInitialize(LionCoreContext ctx);
        public abstract void OnPostInitialize(LionCoreContext ctx);
    }
}