using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveShopObject : MonoBehaviour
{
    [SerializeField] private TypeShop Type;
    [SerializeField] private GameObject[] ObjectActive;


    private void Start()
    {
        for (int i = 0; i < ObjectActive.Length; i++)
        {
            ObjectActive[i].SetActive(false);
        }
        ObjectActive[PlayerPrefs.GetInt(GetTypePlayerPrefs(Type), 0)].SetActive(true);
    }

    private string GetTypePlayerPrefs(TypeShop _type)
    {
        if (_type == TypeShop.Plate)
        {
            return StaticInfo.PlateIndex;
        }
        else if (_type == TypeShop.Bank)
        {
            return StaticInfo.BankIndex;
        }
        else if (_type == TypeShop.BackGround)
        {
            return StaticInfo.BackGroundIndex;
        }
        else
        {
            Debug.LogError("Null Type");
            return null;
        }

    }
}
