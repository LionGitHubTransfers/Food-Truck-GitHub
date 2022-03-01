using UnityEditor.Build;
using UnityEditor.Build.Reporting;

namespace LionStudios.Suite.Analytics
{
    public class BuildUpdater : IPreprocessBuildWithReport
    {
        public int callbackOrder { get; }
        public void OnPreprocessBuild(BuildReport report)
        {
        }
    }
}