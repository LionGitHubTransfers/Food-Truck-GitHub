using System;
using UnityEditor;
using System.Reflection;
using LionStudios.Suite.Core;
using LionStudios.Suite.Editor.PackageManager;

namespace LionStudios.Suite.Editor
{
    internal class LionSettingsManager
    {
        private const string SettingsWindowTitle = "Lion Integration Settings";
        
        private static LionSettingsManager _instance;
        public static LionSettingsManager Instance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = new LionSettingsManager();
                }
                return _instance;
            }
        }

        [MenuItem("LionStudios/Settings Manager")]
        public static void OpenManagerWindow()
        {
            LionSettingsManagerWindow settingsWindow = null;

            if (EditorWindow.HasOpenInstances<LionSettingsManagerWindow>())
            {
                settingsWindow = EditorWindow
                    .GetWindow<LionSettingsManagerWindow>(SettingsWindowTitle);
                settingsWindow.Focus();
            }
            else
            {
                settingsWindow = EditorWindow
                    .CreateWindow<LionSettingsManagerWindow>(SettingsWindowTitle);
                settingsWindow.Show();
                
                // reload runtime package snapshot
                LionPackageService.ReloadRuntimePackages();
            }
        }
    }
}