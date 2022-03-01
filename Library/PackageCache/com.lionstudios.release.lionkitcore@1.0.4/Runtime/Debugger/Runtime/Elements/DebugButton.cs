using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace LionStudios.Suite.Debugging
{
    [RequireComponent(typeof(Button))]
    public class DebugButton : DebuggerElement
    {
        private Text _label;
        private Button _button;

        public void SetLabel(string str)
        {
            if (_label == null)
            {
                _label = this.gameObject.GetComponentInChildren<Text>();
            }

            _label.text = str;
        }

        public void AddClickAction(System.Action action)
        {
            if (_button == null)
            {
                _button = this.gameObject.GetComponent<Button>();
            }

            _button.onClick.AddListener(new UnityEngine.Events.UnityAction(action));
        }

        public void RemoveAllClickActions()
        {
            if (_button == null)
            {
                _button = this.gameObject.GetComponent<Button>();
            }
            _button.onClick.RemoveAllListeners();
        }
    }
}