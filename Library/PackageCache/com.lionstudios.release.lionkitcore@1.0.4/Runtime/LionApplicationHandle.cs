using UnityEngine;
using System;
using System.Reflection;
    
namespace LionStudios.Suite.Core
{
    public class LionApplicationHandle : MonoBehaviour
    {
        public static LionApplicationHandle HNDL
        {
            get
            {
                if (LionCore.IsInitialized)
                {
                    return LionCore.HNDL;
                }
                return null;
            }
        }
        
        public void OnApplicationPause(bool pause)
        {
        
        }
    }
}