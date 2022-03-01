using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataShop : Singleton<DataShop>
{
    [SerializeField] private ScriptebleShop[] ShopData;

    public ScriptebleShop[] GetShopData => ShopData;


   
}
