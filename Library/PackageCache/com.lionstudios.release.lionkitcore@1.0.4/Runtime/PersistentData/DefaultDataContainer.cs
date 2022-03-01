using UnityEngine;
using System;

namespace LionStudios.Suite
{
    public class DefaultDataContainer<T> : ScriptableObject, IDefaultDataContainer where T : PersistentData<T>, new()
    {
        public const string DefaultPlayerDataPath = "DefaultPlayerData";

        public T data = new T();

        public IPersistentData GetData()
        {
            return data;
        }
    }

    public interface IDefaultDataContainer
    {
        IPersistentData GetData();
    }
}
