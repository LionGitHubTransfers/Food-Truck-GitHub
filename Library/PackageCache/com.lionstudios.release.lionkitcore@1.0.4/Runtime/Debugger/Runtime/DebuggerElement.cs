using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace LionStudios.Suite.Debugging
{
    
    public interface ILionDebugElement
    {
        
        /**
            @api {get} /Debugger ID
            @apiName Debugger ID
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {String} ID Gets the ID
         */
        string ID { get; }
        
        /**
            @api {POST} /Debugger Enabled
            @apiName Debugger Enabled
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {Bool} Enabled Gets and Sets if Debugger is enabled or not
         */
        bool Enabled { get; set; }

        //void Recycle();
        
        /**
            @api {get} /Debugger GetGameObject
            @apiName Debugger GetGameObject
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Function) {GameObject} GetGameObject Gets the game object
         */
        GameObject GetGameObject();
    }

    public class DebuggerElement : MonoBehaviour, ILionDebugElement
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

        public bool Enabled
        {
            get
            {
                return this.gameObject.activeInHierarchy;
            }

            set
            {
                this.gameObject.SetActive(value);
            }
        }

        public GameObject GetGameObject()
        {
            return this.gameObject;
        }
    }
}