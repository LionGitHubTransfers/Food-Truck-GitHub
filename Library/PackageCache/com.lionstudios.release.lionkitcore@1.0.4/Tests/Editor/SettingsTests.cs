using System.Collections;
using System.Collections.Generic;
using System.IO;
using LionStudios.Suite.Core;
using LionStudios.Suite.Editor.PackageManager;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using File = UnityEngine.Windows.File;

namespace LionStudios.Suite.Core.TestRunner
{
    public class SettingsTests
    {
        [UnityTest]
        public IEnumerator CheckRuntimeSnapshot()
        {
            LionPackageService.ReloadRuntimePackages();
            Assert.IsTrue(LionPackageService.SnapshotExists);
            yield return null;
        }
        
        [UnityTest]
        public IEnumerator CheckSettingsExist()
        {
            const string SettingsFilename = "LionKitSettings.txt";
            const string SettingsDirectory = "LionStudios/Resources/";
        
            LionSettingsService.SaveSettings();

            string assetPath = Path.Combine(Application.dataPath, SettingsDirectory, SettingsFilename);
            Assert.IsTrue(File.Exists(assetPath));
            yield return null;
        }

        [Test]
        public void SettingsRetrieval()
        {
            var coreSettings = LionStudios.Suite.Core.LionSettingsService.GetSettings<LionStudios.Suite.Core.LionCore.LionKitCoreSettings>();
            Assert.True(coreSettings != null);
        }
    }
}
