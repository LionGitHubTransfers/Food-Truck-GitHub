using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LionStudios.Suite.Debugging
{
    public class DebugSwipe : MonoBehaviour
    {
        private Vector2 touchStartPos = new Vector2(0, 0);
        private Vector2 touchEndPos = new Vector2(0, 0);

        private void Start()
        {
            Input.multiTouchEnabled = true;
            touchStartPos = Vector2.zero;
            touchEndPos = Vector2.zero;
        }

        private void Update()
        {
#if UNITY_EDITOR
            return;
#else
            Touch[] touches = Input.touches;
            if (touches.Length == 3)
            {
                foreach(Touch t in touches)
                {
                    if(t.phase == TouchPhase.Began)
                    {
                        touchStartPos = t.position;
                    }
                    else if(t.phase == TouchPhase.Moved)
                    {
                        touchEndPos = t.position;
                    }
                    else if(t.phase == TouchPhase.Ended)
                    {
                        touchEndPos = t.position;
                        if (touchStartPos.y < touchEndPos.y && Mathf.Abs(touchEndPos.y - touchStartPos.y) > 100)
                        {
                            LionDebugger.Show();
                        }else if (LionDebugger.IsShowing() && touchStartPos.x != touchEndPos.x)
                        {
                            if (touchStartPos.x < touchEndPos.x)
                            {
                                LionDebugger.NextTab();
                            }
                            else
                            {
                                LionDebugger.PrevTab();
                            }
                        }
                    }
                }
            }
#endif
        }
    }
}