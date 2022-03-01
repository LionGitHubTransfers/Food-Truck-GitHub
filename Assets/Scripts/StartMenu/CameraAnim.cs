using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraAnim : Singleton<CameraAnim>
{
    private Vector3 StartPos;

    private void Start()
    {
        StartPos = transform.position;
    }
    public void MoveStartPos()
    {
        transform.DOMove(StartPos, 0.5f);

    }
  
    public void MoveForward()
    {
        transform.DOMove(StartPos + transform.forward, 0.1f);

    }
    public void MovePosShop(Vector3 _pos)
    {
        transform.DOLocalMove(_pos, 0.5f);
    }
}
