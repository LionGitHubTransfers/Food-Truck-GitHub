using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
[CreateAssetMenu(fileName = "DataShop", menuName = "DataShop", order = 2)]
public class ScriptebleShop : ScriptableObject
{
    [SerializeField] private Shop[] Info;
    public Shop[] GetAllInfo => Info;
   

}
[Serializable]
public struct Shop
{
    [SerializeField] private Sprite Icons;
    [SerializeField] private int Cost;
    [SerializeField] private bool AlmazCost;
    [SerializeField] private TypeShop Types;


    public Sprite GetIcons => Icons;
    public int GetCost => Cost;
    public TypeShop GetTypes => Types;
    public bool GetAlmazCost => AlmazCost;
}

public enum TypeShop
{
    Plate,
    Bank,
    BackGround,


}