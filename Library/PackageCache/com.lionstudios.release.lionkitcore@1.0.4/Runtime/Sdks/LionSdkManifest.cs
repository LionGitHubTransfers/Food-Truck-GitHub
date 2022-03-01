using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEngine;
using Object = System.Object;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace LionStudios.Suite.Core
{
    public class LionSdkManifest : ScriptableObject
    {
        private static LionSdkManifest instance;

        public static LionSdkManifest Get()
        {
            if (instance == null)
            {
                LionSdkManifest inst = Resources.Load<LionSdkManifest>("LionSdkManifest");
                if (inst == null)
                {
#if UNITY_EDITOR
                    inst = CreateInstance<LionSdkManifest>();
                    
                    AssetDatabase.CreateAsset(inst, "Assets/Lionstudios/Resources/LionSdkManifest.asset");
                    AssetDatabase.SaveAssets();
                    AssetDatabase.Refresh();
#endif
                }
                instance = inst;
            }

            return instance;
        }

        [SerializeField]
        public string AppLovinVersion
        {
            get
            {
#if HAS_LION_APPLOVIN_SDK
                Type maxSdkType = LionSdkManifest.GetType("MaxSdk");
                if (maxSdkType != null)
                {
                    PropertyInfo maxSdkVersionProp = maxSdkType.GetProperty("Version");
                    if (maxSdkVersionProp != null)
                    {
                        object value = maxSdkVersionProp.GetValue(null, null);
                        if (value != null)
                        {
                            return value.ToString();
                        }
                    }
                }
#endif
                return "- - -";
            }
        }

        [SerializeField]
        public string AdjustVersion
        {
            get
            {
#if HAS_LION_ADJUST_SDK
                // Get adjust version
                Type adjustSdkType = LionSdkManifest.GetType("com.adjust.sdk.Adjust"); 
                if (adjustSdkType != null)
                {
                    MethodInfo adjustSdkVersionProperty = adjustSdkType.GetMethod("getSdkVersion");
                    if (adjustSdkVersionProperty != null)
                    {
                        var versionValue = adjustSdkVersionProperty.Invoke(null, null);
                        if (!string.IsNullOrEmpty(versionValue.ToString()))
                        {
                            return versionValue.ToString();
                        }
                    }
                }
#endif

                return "- - -";
            }
        }

        [SerializeField]
        public string FacebookVersion
        {
            get
            {
#if HAS_LION_FACEBOOK_SDK
                // Get Facebook Version
                Type facebookSdkType = LionSdkManifest.GetType("Facebook.Unity.FacebookSdkVersion");
                if (facebookSdkType != null)
                {
                    PropertyInfo facebookBuildProperty = facebookSdkType.GetProperty("Build");
                    if (facebookBuildProperty != null)
                    {
                        object buildProperty = facebookBuildProperty.GetValue(facebookBuildProperty);
                        if (buildProperty != null && !string.IsNullOrEmpty(buildProperty.ToString()))
                        {
                            return buildProperty.ToString();
                        }
                    }
                }
#endif
                return "- - -";
            }
        }

        [SerializeField]
        public string FirebaseVersion
        {
            get
            {
#if HAS_LION_FIREBASE_SDK
                string firebaseHomePath = Path.GetFullPath(Path.Combine("Assets", "Firebase"));
                string m2RepoPath = Path.Combine(firebaseHomePath, "m2repository", "com", "google", "firebase", "firebase-app-unity");

                Version highestVer = null;
                Version currentVer = null;

                if (Directory.Exists(firebaseHomePath))
                {
                    DirectoryInfo repoInfo = new DirectoryInfo(m2RepoPath);

                    if (repoInfo.Exists)
                    {
                        foreach (DirectoryInfo dir in repoInfo.GetDirectories())
                        {
                            if (Version.TryParse(dir.Name, out currentVer))
                            {
                                if (highestVer == null || currentVer > highestVer)
                                {
                                    highestVer = currentVer;
                                }
                            }
                        }

                        if (highestVer != null)
                        {
                            return highestVer.ToString();
                        }
                    }
                }
#endif
                return "- - -";
            }
        }

        public static Type GetType(string typeName)
        {
            var type = Type.GetType(typeName);
            if (type != null) return type;
            foreach (var a in AppDomain.CurrentDomain.GetAssemblies())
            {
                type = a.GetType(typeName);
                if (type != null)
                    return type;
            }

            return null;
        }
    }
}