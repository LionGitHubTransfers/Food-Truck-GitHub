using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using static JsonController;

public class CellMinigame : MonoBehaviour
{
    [SerializeField] private Image Icon;
    [SerializeField] private GameObject Oultline;
    private TypeSell CurrentType;
    private int Index;
    private int Level;

    public int GetIndex => Index;
    public TypeSell GetType => CurrentType;
    Sequence OutlineSequense;
    public void SetInfo(LevelAlchimy _info)
    {
        Icon.sprite = DataController.Instance.GetData.GetCellSprite(_info.TypeCellAlchimy, _info.Index);
        Level = _info.Level;
        Index = _info.Index;
        CurrentType = _info.TypeCellAlchimy;
    }
    public void SetInfoDopCell(int _index , TypeSell _type)
    {
        Icon.sprite = DataController.Instance.GetData.GetCellSprite(_type, _index);
        Index = _index;
        CurrentType = _type;
    }
    public void MoveLastPos(Vector3 _lastPos)
    {
        transform.DOMove(_lastPos ,0.5f);
        transform.DOScale(new Vector3(4.5f, 4.5f, 4.5f), 0.5f);
    }
    private void OnDisable()
    {
       OutlineSequense.Kill();
    }
    public void OpenOrNoOutline(bool _Open)
    {
        Oultline.SetActive(_Open);
        if (_Open)
        {
            OutlineSequense = DOTween.Sequence()
                .Append(Oultline.GetComponent<Image>().DOFade(0.1f, 0.4f)).SetLoops(-1, LoopType.Yoyo);
        }
    }
    
}
