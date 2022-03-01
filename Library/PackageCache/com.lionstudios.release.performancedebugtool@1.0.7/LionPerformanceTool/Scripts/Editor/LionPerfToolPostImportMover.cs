#if UNITY_EDITOR
using System.IO;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace LionStudios.Editor
{
    public class LionPerfToolPostImportMover : AssetPostprocessor
    {
        const string pkgDir = "Packages/com.lionstudios.performancedebugtool";
        const string destDir = "Assets";
        static readonly List<string> copyDirs = new List<string>
        {
            "Packages/com.lionstudios.performancedebugtool/LionPerformanceTool/Prefabs",
        };
        static readonly string newPath = "Packages/com.lionstudios.performancedebugtool/LionPerformanceTool/Prefab~";

        static void OnPostprocessAllAssets(string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths)
        {
            List<string> newPathes = new List<string>();
            foreach (string str in importedAssets)
            {
                //Debug.Log("imported Asset: " + str);
                foreach (string copyDir in copyDirs)
                {
                    if (str.Contains(copyDir))
                    {
                        string destPath = str.Replace(pkgDir, destDir);
                        if (CheckExistence(destPath) == false)
                        {
                            //Debug.Log("Reimported Asset: " + destPath);
                            Directory.CreateDirectory(Path.GetDirectoryName(str.Replace(pkgDir, destDir)));
                            AssetDatabase.CopyAsset(str, destPath);
                            newPathes.Add(destPath);
                        }
                    }
                }
            }
            if (!CheckExistence(newPath)&& newPathes.Count>0 && CheckExistence(copyDirs[0]))
                Directory.Move(copyDirs[0], newPath);

        } 

        private static bool CheckExistence(string location)
        {
            return File.Exists(location) ||
                   Directory.Exists(location) ||
                   (location.EndsWith("/*") && Directory.Exists(Path.GetDirectoryName(location)));
        }
    }
}
#endif
