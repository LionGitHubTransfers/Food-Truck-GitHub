using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class AminOfflineMoney : MonoBehaviour
{
    [SerializeField] private TextMeshPro Text;

   public void StartAmin(int _countMoney)
    {

        transform.DOLocalMoveY(0, 0);
        Text.text = _countMoney.ToString();
        transform.DOLocalMoveY(4, 2f);
        transform.DOScale(2.5f, 1f).OnComplete(() => {

            transform.transform.DOScale(0, 0.7f);
        });
    }
}
