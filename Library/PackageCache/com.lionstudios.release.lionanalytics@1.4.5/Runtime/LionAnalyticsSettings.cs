using LionStudios.Suite.Core;

namespace LionStudios.Suite.Analytics
{
    public class LionAnalyticsSettings : ILionSettingsInfo
    {
        [SettingSection("General")]
        public int heartbeatInterval = 60;

        [SettingSection("Event Firing")]
        public bool enableFirebaseEvents = false;
        public bool enableGameAnalyticsEvents = true;
        public bool enableDeltaDnaEvents = true;
    }
}