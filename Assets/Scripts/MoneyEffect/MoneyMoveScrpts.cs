using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyMoveScrpts : MonoBehaviour
{
    Sequence MoneySequence;
    public void MoveTarget(Transform _target,float _randomPos)
    {
        MoneySequence = DOTween.Sequence()
            .Append(transform.DOMove(transform.position + new Vector3(Random.Range(-_randomPos, _randomPos), Random.Range(-_randomPos, _randomPos), 0), 0.8f).SetEase(Ease.OutCirc))
            .AppendInterval(Random.Range(0.05f, 0.4f))
            .Append(transform.DOMove(_target.position, 0.3f)).OnComplete(()=> {

                Destroy(gameObject);
            });
       


    }

   
}
