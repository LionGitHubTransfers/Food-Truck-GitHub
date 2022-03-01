using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LionStudios
{
    public static class ObjectPool<T> where T : class, new()
    {
        public static List<T> ObjectsAvailable = new List<T>();
        public static T GetObject()
        {
            T obj = null;
            if (ObjectsAvailable.Count > 0)
            {
                int index = ObjectsAvailable.Count - 1;
                obj = ObjectsAvailable[index];
                ObjectsAvailable.RemoveAt(index);
            }
            else
            {
                obj = new T();
            }

            return obj;
        }

        public static void ReturnObject(T obj)
        {
            ObjectsAvailable.Add(obj);
        }

        public static void ReturnObjects(IEnumerable<T> objects)
        {
            ObjectsAvailable.AddRange(objects);
        }
    }

    public static class ArrayObjectPool<T> where T : class, new()
    {
        
        public static List<List<T[]>> _Arrays = new List<List<T[]>>();

        public static T[] GetArray(int length) //where T : class, new()
        {
            if (_Arrays.Count > length && _Arrays[length] != null && _Arrays[length].Count > 0)
            {
                List<T[]> pool = _Arrays[length];
                int lastArrayIndex = pool.Count - 1;
                T[] array = _Arrays[length][lastArrayIndex];
                _Arrays[length].RemoveAt(lastArrayIndex);
                if (array == null)
                {
                    //Debug.LogError("wtf is going on here ... return Array is null ... creating new array :: " + array.Length);
                    return new T[length];
                }

                //Debug.Log(new RText("Return Array :: " + array.Length, Color.cyan));
                return array;
            }

            return new T[length];
        }

        public static T[] CopyList(IReadOnlyList<T> list) 
        {
            T[] array = GetArray(list.Count) as T[];
            for (int i = 0; i < list.Count; i++)
                array[i] = list[i];

            return array;
        }

        public static T[] CopyCollection(ICollection<T> collection)
        {
            T[] array = GetArray(collection.Count) as T[];
            if (array == null)
                Debug.LogError("Array is null :: " + collection.Count + " :: " + typeof(T));
            int index = 0;
            foreach (T obj in collection)
            {
                array[index] = obj;
                index++;
            }

            return array;
        }

        public static T[] CopyDictionaryValues<U>(IDictionary<U,T> dictionary)
        {
            T[] array = GetArray(dictionary.Count) as T[];
            int index = 0;
            foreach (KeyValuePair<U,T> kvp in dictionary)
            {
                array[index] = kvp.Value;
                index++;
            }

            return array;
        }

        public static void ReturnArray(T[] array)
        {
            //Debug.Log("Array = null ?" + (array == null));
            if (array == null)
                return;

            while (_Arrays.Count < array.Length + 1)
                _Arrays.Add(null);

            if (_Arrays[array.Length] == null)
                _Arrays[array.Length] = new List<T[]>(1);

            _Arrays[array.Length].Add(array);
        }
    }
}
