#if UNITY_EDITOR
using System;
using System.IO;
using LionStudios.Suite.Debugging;
using UnityEditor;
using UnityEngine;

namespace LionStudios.Suite.Editor
{
    public class LionPackageCacheUtility
    {
        private const string DialogTitle = "Erase LionKit from cache?";
        private const string DialogDescription = "This will remove previously downloaded LionKit packages from the global Unity NPM packages cache."+
                                                 "\nAre you sure you want to continue?";
        private const string LKPackageCacheId = "packages.lionstudios.cc_4873";
        
#if UNITY_EDITOR_WIN
        private const string LKPackageCachPath = "Unity\\cache";
#elif UNITY_EDITOR_OSX
        private const string LKPackageCachPath = "Library/Unity/cache";
#elif UNITY_EDITOR_LINUX
        private const string LKPackageCachPath = ".config/unity3d/cache";
#endif

        [MenuItem("LionStudios/Advanced/Erase Unity Global Package Cache")]
        public static void EraseUnityPackageCache()
        {
            if (UnityEditor.EditorUtility.DisplayDialog(DialogTitle, DialogDescription, "Yes", "No"))
            {
                ErasePackageCache(LKPackageCacheId);
            }
        }

        private static void ErasePackageCache(string cacheName)
        {
            LionDebug.Log("Erasing downloaded LionKit versions from global Unity cache...");
            try
            {
#if UNITY_EDITOR_WIN
                string platformAppData = Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData);
#else
                string platformAppData = Environment.GetFolderPath(Environment.SpecialFolder.Personal);
#endif
                
                string path = Path.Combine(platformAppData, LKPackageCachPath);
                string npmPath = Path.Combine(path, "npm", LKPackageCacheId);
                string packagesPath = Path.Combine(path, "packages", LKPackageCacheId);
                
                if (Directory.Exists(npmPath)) Directory.Delete(npmPath, true);
                if (Directory.Exists(packagesPath)) Directory.Delete(packagesPath, true);
            }
            catch (Exception noDirectoryEx)
            {
                LionDebug.LogException(noDirectoryEx);
            }
            finally
            {
                LionDebug.Log("Successfully erased LionKit from Unity cache");
            }
        }
    }
}
#endif