using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace LionStudios.Suite.Debugging
{
    public interface ILionDebugTab
    {
        string ID { get; }

        ILionDebugElement[] GetElements();

        ILionDebugElement GetElementById(string id);
        T GetElementByID<T>(string id) where T : ILionDebugElement;

        void AddElement(ILionDebugElement newElement);
        void RemoveElement(string id);

        void Hide();
        void Show();
    }

    public class DebuggerTab : MonoBehaviour, ILionDebugTab
    {
        private string _id;
        public string ID {
            get
            {
                return _id;
            }

            set
            {
                _id = value;
            }
        }

        private List<ILionDebugElement> _elements;
        private List<ILionDebugElement> elements
        {
            get
            {
                if(_elements == null)
                {
                    _elements = new List<ILionDebugElement>();
                }
                return _elements;
            }
        }

        public Transform _root;

        public ILionDebugElement[] GetElements()
        {
            return elements.ToArray();
        }

        public void AddElement(ILionDebugElement newElement)
        {
            if(newElement != null)
            {
                if(GetElementById(newElement.ID) != null)
                {
                    string msg = string.Format("Failed to add element '{0}'. Already exists.", newElement.ID);
                    Debug.LogWarning(msg);
                    return;
                }

                elements.Add(newElement);
                newElement.GetGameObject().transform.SetParent(_root, worldPositionStays: false);
            }
        }

        public ILionDebugElement GetElementById(string id)
        {
            for (int i = 0; i < elements.Count; i++)
            {
                if (elements[i].ID == id)
                {
                    return elements[i];
                }
            }

            return null;
        }

        public T GetElementByID<T>(string id) where T : ILionDebugElement
        {
            for (int i = 0; i < elements.Count; i++)
            {
                if (elements[i].ID == id)
                {
                    return (T)elements[i];
                }
            }

            return default(T);
        }

        public void RemoveElement(string id)
        {
            for(int i = 0; i < elements.Count; i++)
            {
                if(elements[i].ID == id)
                {
                    elements.RemoveAt(i);
                }
            }
        }

        public void Hide()
        {
            _root.gameObject.SetActive(false);
        }

        public void Show()
        {
            _root.gameObject.SetActive(true);
        }
    }
}