using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;

[CreateAssetMenu(fileName = "Data", menuName = "Data", order = 1)]
public class ScriptebleObjectCellInfo : ScriptableObject
{
    [SerializeField] private Info[] Info;
    [SerializeField] private SaltInfo[] SaltInfo;
    public Info[] GetAllInfo => Info;
    public SaltInfo[] GetSaltInfo => SaltInfo;

    public Sprite GetCellSprite(TypeSell _type, int _Index)
    {
        return Info.FirstOrDefault(x => x.GetTypeCell == _type).GetIcons[_Index];
    }
    
    public Sprite GetCellNewSpriteInSalt(TypeSell _type, int _Index,int _indexSalt)
    {
        return SaltInfo.FirstOrDefault(x => x.GetTypeCell == _type && x.GetIndex == _Index).GetIcons[_indexSalt];
    }
    public bool CheckThereisIndex(TypeSell _type, int _Index) //проверка есть ли индек дл€ обьеденени€ €чейки
    {
        return Info.FirstOrDefault(x => x.GetTypeCell == _type).GetIcons.Length != _Index ? true : false;
    }
    public GameObject GetCellModel(TypeSell _type, int _Index)
    {
        return Info.FirstOrDefault(x => x.GetTypeCell == _type).GetModel[_Index];
    }
}
[Serializable]
public struct Info
{
    [SerializeField] private TypeSell _typeCell;
    [SerializeField] private Sprite[] Icons;
    [SerializeField] private GameObject[] Model;

    public GameObject[] GetModel => Model;
    public TypeSell GetTypeCell => _typeCell;
    public Sprite[] GetIcons => Icons;

}

[Serializable]
public struct SaltInfo
{
    [SerializeField] private TypeSell _typeCell;
    [SerializeField] private int Index;
    [SerializeField] private Sprite[] Icons;
   
    public TypeSell GetTypeCell => _typeCell;
    public Sprite[] GetIcons => Icons;
    public int GetIndex => Index;
}



public enum TypeSell
{
    Cell1,
    Cell2,
    Cell3,
    Cell4,
    Cell5,
    Cell6,
    Cell7,
    Bonus,
    Salt

}
