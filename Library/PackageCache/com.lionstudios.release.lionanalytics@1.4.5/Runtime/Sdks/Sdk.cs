using System;
using System.Reflection;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    public abstract class Sdk
    {
        public abstract void TryFireEvent(LionGameEvent gameEvent);
    }
}