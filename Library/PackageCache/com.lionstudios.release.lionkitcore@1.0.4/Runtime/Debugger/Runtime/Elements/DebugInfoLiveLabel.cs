using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace LionStudios.Suite.Debugging
{
    public class DebugInfoLiveLabel : DebuggerElement
    {
        public Text infoLabel = null;
        public Text liveLabel = null;

        private System.Func<string> _getStr = null;
        private string staticValue = string.Empty;

        public void SetLabel(string str)
        {
            infoLabel.text = str;
        }
        
        public void SetStaticValue(string value)
        {
            staticValue = value;
            liveLabel.text = value;
        }

        public void SetLiveInfo(System.Func<string> returnStr)
        {
            _getStr = returnStr;
        }

        private void Update()
        {
            if(staticValue == string.Empty && _getStr != null)
            {
                string str = _getStr.Invoke();
                liveLabel.text = str ?? "[NO DATA]";
            }
        }
    }
}