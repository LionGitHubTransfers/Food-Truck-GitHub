using System;
using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEditor.Compilation;
using UnityEngine;
using UnityEngine.TestTools;
using UnityEngine.UI;


namespace LionStudios.Suite.Debugging
{
    /*   * IsShowing() [X]
         * AddButton(string, action, page) [X]
         * AddLabel(label, page)
         * AddElement(element, page)
         * AddTab(string)
         * AddTab(string, tab)*/

    public class Debugger
    {

        //Test isShowing()
        [Test]
        public void TestIsShowing()
        {
            var isItShowing = LionDebugger.IsShowing();
            Assert.True(isItShowing);
        }


        //Test addButton(string, Action, string)
        [Test]
        public void TestAddButton()
        {
            Action newOnClick = () => tryOnClick();
            var addButton = LionDebugger.AddButton("button", newOnClick, "one");
            Assert.NotNull(addButton);
            Assert.True(addButton != null);
        }

        public void tryOnClick()
        {
            Debug.Log("onClick action has happened");
        }
        
        //Test addInfoLabel
        public void tryAddInfoLabel()
        {
            var addInfoLabel = LionDebugger.AddInfo("label", "one");
            Assert.NotNull(addInfoLabel);
            Assert.True(addInfoLabel != null);
        }
        
        //Test addInfoLiveLabel
        public void tryAddInfoLiveLabel()
        {
            string label;
            Func<string> test = testingLiveLabel;
            var addInfoLiveLabel = LionDebugger.AddInfo("label2", test, "two");
            Assert.NotNull(addInfoLiveLabel);
            Assert.True(addInfoLiveLabel != null);
        }

        public string testingLiveLabel()
        {
            Debug.Log("Testing");
            return "live label return";
        }
        
        //Test addElement
        public void tryAddElement()
        {
            ILionDebugElement debugElement = new DebuggerElement();
            try
            {
                LionDebugger.AddElement(debugElement, "three");
                Assert.IsTrue(true);
            }
            catch
            {
                Assert.IsTrue(false);
            }
        }
        
        //Test Show
        public void tryShow()
        {
            try
            {
                LionDebugger.Show();
                Assert.IsTrue(true);
            }
            catch
            {
                Assert.IsTrue(false);
            }
        }
        
        //Test Hide
        public void tryHide()
        {
            try
            {
                LionDebugger.Hide();
                Assert.IsTrue(true);
            }
            catch
            {
                Assert.IsTrue(false);
            }
        }
    }
}