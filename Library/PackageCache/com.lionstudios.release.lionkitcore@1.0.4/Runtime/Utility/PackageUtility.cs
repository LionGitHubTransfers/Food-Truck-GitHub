using System;
using System.IO;
using System.Collections.Generic;
using LionStudios.Suite.Debugging;
using UnityEditor;
using UnityEngine;

namespace LionStudios.Suite
{
    public class PackageUtility
    {
        [Serializable]
        public class PackageCollection
        {
            [SerializeField]
            public PackageInfo[] packages;

            public PackageCollection(params PackageInfo[] p)
            {
                packages = p;
            }
        }
        
        [Serializable]
        public class PackageInfo
        {
            [SerializeField] public string version;
            [SerializeField] public string name;
            [SerializeField] public DependencyInfo[] dependencies;
        }
        
        [Serializable]
        public class DependencyInfo
        {
            [SerializeField] public string version;
            [SerializeField] public string name;
        }
        
        public sealed class PackageInfoKey
        {
            public const string version = "version";
            public const string name = "displayName";
            public const string dependencies = "dependencies";
            public const string description = "description";
            public const string unityVersion = "unity";
            public const string samples = "samples";
        }
        
        public const string PackageSnapshotPath = "LionStudios/Resources";
        public const string PackageSnapshotFilename = "PackageSnapshot.json";
        
        private const string PackageScopePlaceholder = "[scope]";
        private const string PackageJsonFilename = "package.json";
        private static readonly string[] releaseScopes = new string[]
        {
            "release",
            "dev",
            "beta",
            "gamma",
            "internal"
        };


        private static string GetPackageJsonPath(string pkgOrg, string pkgName)
        {
            string pkgId = $"Packages/com.{pkgOrg}.{PackageScopePlaceholder}.{pkgName}";
 
            foreach (string scope in releaseScopes)
            {
                string pkgDirectory = Path.GetFullPath(pkgId.Replace(PackageScopePlaceholder, scope));
                if (Directory.Exists(pkgDirectory))
                {
                    string jsonPath = Path.Combine(pkgDirectory, PackageJsonFilename);
                    if (File.Exists(jsonPath))
                    {
                        return jsonPath;
                    }
                }
            }

            return null;
        }

        public static string GetFullPackageIdentifier(string pkgOrg, string pkgName)
        {
            string pkgId = $"Packages/com.{pkgOrg}.{PackageScopePlaceholder}.{pkgName}";
            foreach (string scope in releaseScopes)
            {
                string pkgDirectory = Path.GetFullPath(pkgId.Replace(PackageScopePlaceholder, scope));
                if (Directory.Exists(pkgDirectory))
                {
                    return $"com.{pkgOrg}.{scope}.{pkgName}";
                }
            }

            return null;
        }
        
        /// <summary>
        /// Returns value of the specified key from the package json.
        /// Note: ONLY WORKS IN EDITOR
        /// </summary>
        public static string GetPackageInfoNonAlloc(string pkgOrg, string pkgName, string key)
        {
            string packageJsonPath = GetPackageJsonPath(pkgOrg, pkgName);

            if (!string.IsNullOrEmpty(packageJsonPath))
            {
                string content = System.IO.File.ReadAllText(packageJsonPath);
                var json = LionStudios.Suite.Utility.Json.MiniJson.Deserialize(content) as Dictionary<string, object>;
                if (json.ContainsKey(key))
                {
                    if (json[key] is string)
                    {
                        return json[key] as string;
                    }
                    else
                    {
                        LionDebug.LogWarning("Failed to retrieve package info. Reason: Value type invalid.");
                    }
                }
                else
                {
                    LionDebug.LogWarning("Failed to retrieve package info. Reason: Key not found.");
                }
            }
            else
            {
                LionDebug.LogWarning("Failed to retrieve package info. Reason: JSON not found.");
            }

            return string.Empty;
        }

        public static PackageInfo GetPackageInfo(string pkgOrg, string pkgName)
        {
            foreach(string scope in releaseScopes)
            {
                PackageInfo package = GetPackageInfo($"com.{pkgOrg}.{scope}.{pkgName}");
                if (package != null)
                {
                    return package;
                }
            }

            return null;
        }

        public static PackageInfo GetPackageInfo(string pkgName)
        {
            TextAsset settingsFile = (TextAsset)Resources.Load(
                PackageSnapshotFilename.Replace(".json", ""), typeof(TextAsset));

            if (settingsFile != null)
            {
                PackageInfo result = null;
                PackageCollection packageCollection = JsonUtility.FromJson<PackageCollection>(settingsFile.text);
                foreach (PackageInfo pkg in packageCollection.packages)
                {
                    if (pkg.name == pkgName)
                    {
                        result = pkg;
                    }
                }

                if (result != null)
                {
                    return result;
                }
            }
            else
            {
                LionDebug.Log("Failed to retrieve package info. Reason: JSON snapshot not found.", LionDebug.DebugLogLevel.Verbose);
            }

            return null;
        }
    }
}