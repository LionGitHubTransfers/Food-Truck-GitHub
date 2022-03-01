using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace LionStudios.Runtime.Sdk
{
    public enum SdkId
    {
        Adjust = 1,
        Firebase = 2,
        GameAnalytics = 3,
        Nakama = 4,
        GooglePlayReview = 5,
        ApplovinMAX = 6,
        DeltaDNA = 7,
        Facebook = 8
    }

    [Serializable]
    public class LionSdkCollection : IEnumerable
    {
        [SerializeField] public LionSdkInfo[] Sdks;
        
        public IEnumerator GetEnumerator()
        {
            return Sdks.GetEnumerator();
        }
    }
    
    [Serializable]
    public class LionSdkInfo
    {
        [SerializeField] public int ID;
        [SerializeField] public bool IsSupported;
        [SerializeField] public bool IsInstalled;
        [SerializeField] public bool AssetAndPackageRequired;
        [SerializeField] public string AssetPath;
        [SerializeField] public string PackageName;
        [SerializeField] public string[] RequiredDirectories;
    }
}