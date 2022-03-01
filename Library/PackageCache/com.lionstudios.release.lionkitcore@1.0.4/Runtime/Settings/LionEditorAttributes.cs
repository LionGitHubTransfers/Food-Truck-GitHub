using System;

namespace LionStudios.Suite.Core
{
    public class SettingSectionAttribute : UnityEngine.HeaderAttribute
    {
        public SettingSectionAttribute(string header)
            : base(header)
        {

        }
    }

    public class LabelOverrideAttribute : Attribute
    {
        public readonly string label;
        public LabelOverrideAttribute(string labelOverride = "")
        {
            label = labelOverride;
        }
    }

    public class SettingsButtonAttribute : Attribute
    {
        public readonly string label;
        public SettingsButtonAttribute(string labelOverride = "")
        {
            label = labelOverride;
        }
    }
}