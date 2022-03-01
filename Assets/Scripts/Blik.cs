using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Blik : MonoBehaviour
{
    Sequence AnimSequense;
    private void Start()
    {
        transform.localPosition = new Vector3(transform.localPosition.x - 500, transform.localPosition.y, transform.localPosition.z);
        AnimSequense = DOTween.Sequence()
            .Append(transform.DOLocalMoveX(transform.localPosition.x + 1000f, 0.7f).SetEase(Ease.Linear)).SetLoops(-1, LoopType.Restart)
            .AppendInterval(3);
        
    }
    private void OnDisable()
    {
        AnimSequense.Kill();
    }

}
