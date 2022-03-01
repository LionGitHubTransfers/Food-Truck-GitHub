using System;
using System.Collections;
using System.Collections.Generic;
    
namespace LionStudios.Suite.Editor.Platform
{
    /// <summary>
    ///   <para>LionKit-Specific Scripting Define Symbols</para>
    /// </summary>
    public enum LionDefineSymbol
    {
        /// <summary>
        ///   <para>
        ///     Project has the Google In-App Review plugin installed.
        ///     (com.google.play.core & com.google.play.review)
        ///   </para>
        /// </summary>
        LK_USE_APP_REVIEW,
        
        /// <summary>
        ///   <para>
        ///     Project has the Unity IAP services enabled
        ///     (UnityEngine.Purchasing)
        ///   </para>
        /// </summary>
        LK_USE_UNITY_IAP,
    }
}