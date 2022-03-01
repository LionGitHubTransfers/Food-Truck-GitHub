//using System;
//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;

//namespace LionStudios
//{
//    class PersistentReferenceList<T> where T : PersistentReference<T> //: PersistentData<PersistentReferenceList>//, IReadOnlyList<PersistentReference>
//    {
//        //[SerializeField]
//        List<T> _References;// = new List<PersistentReference>();

//        //public PersistentReference this[int index]
//        //{
//        //    get
//        //    {
//        //        return _References[index];
//        //    }
//        //}

//        public PersistentReferenceList()
//        {
//            _References = new List<T>(T.LoadAll());
//        }

//        public static PersistentReferenceList<T> Load()
//        {
//            return new PersistentReferenceList<T>();
//        }

//        public void Add(T reference)
//        {
//            _References.Add(reference);
//            reference.SaveLocal();
//        }

//        public void Clear()
//        {
//            _References.Clear();
//            T.DeleteAllInstances();
//        }

//        public IEnumerator<PersistentReference<T>> GetEnumerator()
//        {
//            return ((IReadOnlyList<PersistentReference<T>>)_References).GetEnumerator();
//        }

//        //IEnumerator IEnumerable.GetEnumerator()
//        //{
//        //    return ((IReadOnlyList<PersistentReference>)_References).GetEnumerator();
//        //}

//        public int Count
//        {
//            get
//            {
//                return _References.Count;
//            }
//        }
//    }

//    //[Serializable]
//    class PersistentReference<T> : PersistentData<PersistentReference<T>>
//    {
//        public string type;
//    }

//    class PersistentReferenceWrite : PersistentReference<PersistentReferenceWrite> {}
//    class PersistentReferenceDelete : PersistentReference<PersistentReferenceDelete> {}
//}
