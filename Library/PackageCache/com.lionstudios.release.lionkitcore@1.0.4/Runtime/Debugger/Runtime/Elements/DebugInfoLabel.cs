using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace LionStudios.Suite.Debugging
{
    [RequireComponent(typeof(Text))]
    public class DebugInfoLabel : DebuggerElement
    {
        public void SetLabel(string str)
        {
            this.GetComponent<Text>().text = str;
        }
    }
}