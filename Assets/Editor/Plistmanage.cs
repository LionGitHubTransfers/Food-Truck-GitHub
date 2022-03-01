using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
#if UNITY_IOS
using System.IO;
using UnityEditor.iOS.Xcode;
#endif
using System.Collections.Generic;

public class Plistmanage : MonoBehaviour
{

#if UNITY_IOS

    [PostProcessBuild]
    static void OnPostprocessBuild(BuildTarget buildTarget, string path)
    {
        // Read plist
        var plistPath = Path.Combine(path, "Info.plist");
        var plist = new PlistDocument();
        plist.ReadFromFile(plistPath);

        // Update value
        PlistElementDict rootDict = plist.root;
        rootDict.SetString("NSLocationWhenInUseUsageDescription", "Your location will be used to get game statistics, and improve the quality of the application used.");

        // Write plist
        File.WriteAllText(plistPath, plist.WriteToString());
    }
#endif
}
