using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "AlchimyData", menuName = "AlchimyData", order = 1)]
public class ScriptebleObjectAlchimyLevel : ScriptableObject
{
    [SerializeField] private LevelAlchimy[] InfoLevel;

    public LevelAlchimy[] GetLevel => InfoLevel;
}
[Serializable]
public struct LevelAlchimy
{
    public TypeSell TypeCellAlchimy;
    public int Index;
    public int Level;
}
