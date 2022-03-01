using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Level ", menuName = "Level", order = 1)]
public class ScriptebleObjectLevel : ScriptableObject
{

    [SerializeField] private InfoCharaster[] Info;
    [SerializeField] private InfoBonusCell InfoBunus;
    public InfoCharaster GetCharasterInfo(int _index)
    {
        return Info[_index];
    }
    public int GetCountCurrentLevel()
    {
        return Info.Length;
    }
    public InfoBonusCell GetInfoBonus => InfoBunus;
    public InfoCharaster[] GetInfo => Info;
  
    public InfoCharaster[] SetStartInfo
    {
        set
        {
            Info = value;
        }
    }
   
    
}

[Serializable]
public struct InfoCharaster
{
    public TypeSell[] _typeCell;
    public int[] Index;
    public SailInfo[] Salt;
    public bool[] Grill;
    public TypeSell[] GetTypePlayer => _typeCell;
    public int[] GetIndex => Index;
    public SailInfo[] GetSalt => Salt;

    public bool[] GetGrill => Grill;
    public void SetBonusCharaster(TypeSell _bonusType, int _bonusIndex)
    {
        _typeCell = new TypeSell[1];
        Index = new int[1];
        _typeCell[0] = _bonusType;
        Index[0] = _bonusIndex;
    }
}

[Serializable]
public struct SailInfo
{
    public bool SailActive;
    public int IndexSelt;
}

[Serializable]
public struct InfoBonusCell
{
    [SerializeField] private TypeSell[] _typeCell;
    [SerializeField] private int[] Index;

    public TypeSell[] GetTypePlayer => _typeCell;
    public int[] GetIndex => Index;

}
