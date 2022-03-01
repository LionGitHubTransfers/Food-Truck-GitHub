using LionStudios.Suite.Editor;
using LionStudios.Suite.Editor.PackageManager;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;

public class BuildUpdater : IPreprocessBuildWithReport
{
    public int callbackOrder { get; }
    public void OnPreprocessBuild(BuildReport report)
    {
        LionPackageService.ReloadRuntimePackages();
        
#if UNITY_ANDROID
        LKEditorInitialize.UpdateProguardCustomSettings();
#endif
        
    }
}