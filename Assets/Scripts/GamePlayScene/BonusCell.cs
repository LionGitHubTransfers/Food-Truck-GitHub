using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BonusCell : MonoBehaviour
{

    [SerializeField] private Image Icon;
    private int Index;
    private TypeSell Type;

    public TypeSell GetType => Type;

    public int GetIndex => Index;

    public void SetInfoCell(int _index,TypeSell _type)
    {
        Index = _index;
        Type = _type;
        Icon.sprite = DataController.Instance.GetData.GetCellSprite(_type, _index);
    }

}
