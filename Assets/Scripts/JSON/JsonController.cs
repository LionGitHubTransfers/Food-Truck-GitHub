using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
public class JsonController : Singleton<JsonController>
{
    public Data DataInfo;
    public string PathButtonJson;
    public List<CellItemWorkSpace> InfoWorkSpace = new List<CellItemWorkSpace>();
    private int CurrentLocation;
    private void Start()
    {
        DontDestroyOnLoad(gameObject);
        PathButtonJson = Application.persistentDataPath + "/SaveJson.json";

        if (PlayerPrefs.GetInt("FirstGame", 0) == 0)
        {
            //if (File.Exists(PathButtonJson))
            //{
            //    File.Delete(PathButtonJson);
            //}
            AddCellItemWorkSpace();
            AddIndexOpenOrCloseSkinInShop();
            PlayerPrefs.SetInt("FirstGame", 1);
            SaveField();
        }
        else
        {
            LoadField();
        }
        SetInfoWorkSpace();
    }
    private void OnDestroy()
    {
      //  SaveField();
    }
    private void OnApplicationQuit()
    {
        SaveField();
    }
    private void OnApplicationPause(bool pause)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        SaveField();
#endif
    }
    [ContextMenu("Load")]
    public void LoadField()
    {
        DataInfo = LoadButtonData();
        SetInfoWorkSpace();
    }
    [ContextMenu("Save")]
    public void SaveField()
    {
        SaveInfoWorkSpace();
        SaveButton(DataInfo);
    }
    private Data LoadButtonData()
    {
        var jsonData = File.ReadAllText(PathButtonJson);
        return JsonUtility.FromJson<Data>(jsonData);
    }
    private void SaveButton(Data _data)
    {
       
        string dataAsJson = JsonUtility.ToJson(_data, true);
        File.WriteAllText(PathButtonJson, dataAsJson);
    }
    [System.Serializable]
    public class Data
    {
        public List<CellItemWorkSpace> InfoWorkSpaceLocation_1 = new List<CellItemWorkSpace>();
        public List<CellItemWorkSpace> InfoWorkSpaceLocation_2 = new List<CellItemWorkSpace>();
        public LocationInfo InfoLocation;
        public ShopInfo InfoShop;
    }
    
    private void SetInfoWorkSpace()
    {
        CurrentLocation = PlayerPrefs.GetInt("CurrentIndexLocation", 0);
        switch (CurrentLocation)
        {
            
            case 0:
                InfoWorkSpace = DataInfo.InfoWorkSpaceLocation_1;
                break;
            case 1:
                InfoWorkSpace = DataInfo.InfoWorkSpaceLocation_2;
                break;
            default:
                break;
        }
    }
    private void SaveInfoWorkSpace()
    {
        switch (CurrentLocation)
        {
            case 0:
                DataInfo.InfoWorkSpaceLocation_1 = InfoWorkSpace;
                break;
            case 1:
                DataInfo.InfoWorkSpaceLocation_2 = InfoWorkSpace;
                break;
            default:
                break;
        }
    }
    [System.Serializable]
   public class CellItemWorkSpace
    {
        public TypeSell Types;
        public int Index;
        public int CurrentCount;
        public int Level;
      //  public Sprite Icon;
    }
    [System.Serializable]
    public class ShopInfo
    {
        public List<int> Plate = new List<int>();
        public List<int> Bank = new List<int>();
        public List<int> BackGround = new List<int>();
    }

    public void SaveBuyNewSkin(TypeShop type, int _index)
    {
        if (type == TypeShop.Plate)
        {
            DataInfo.InfoShop.Plate[_index] = 1;
        }
        else if (type == TypeShop.Bank)
        {
            DataInfo.InfoShop.Bank[_index] = 1;
        }
        else if (type == TypeShop.BackGround)
        {
            DataInfo.InfoShop.BackGround[_index] = 1;
        }
    }

    public void AddIndexOpenOrCloseSkinInShop()
    {
        ScriptebleShop[] ShopData = DataShop.Instance.GetShopData;
        ShopInfo NewShopIndex = new ShopInfo { };
        for (int i = 0; i < ShopData.Length; i++)
        {
            for (int u = 0; u < ShopData[i].GetAllInfo.Length; u++)
            {
                if (i == 0)
                {
                    NewShopIndex.Plate.Add(u == 0 ? 1 : 0);
                }
                else if (i == 1)
                {
                    NewShopIndex.Bank.Add(u == 0 ? 1 : 0);
                }
                else if (i == 2)
                {
                    NewShopIndex.BackGround.Add(u == 0 ? 1 : 0);
                }

            }
        }
        DataInfo.InfoShop = NewShopIndex;
    }
    public void AddCellItemWorkSpace()
    {
        ScriptebleObjectCellInfo[] DataCellInfo = DataController.Instance.GetlocationData;

        for (int i = 0; i < DataCellInfo[0].GetAllInfo.Length-2; i++) // берет инфу о всех элементах которые можно создать на борде
        {
            for (int u = 0; u < DataCellInfo[0].GetAllInfo[i].GetIcons.Length; u++)
            {
                CellItemWorkSpace NewCell = new CellItemWorkSpace
                {
                    CurrentCount = 0,
                    Types = (TypeSell)i,
                    Index = u,
                    Level = 0,
                  //  Icon = DataCellInfo.GetAllInfo[i].GetIcons[u]
                };
                DataInfo.InfoWorkSpaceLocation_1.Add(NewCell);
            }
        }
        for (int i = 0; i < DataCellInfo[1].GetAllInfo.Length - 2; i++) // берет инфу о всех элементах которые можно создать на борде
        {
            for (int u = 0; u < DataCellInfo[1].GetAllInfo[i].GetIcons.Length; u++)
            {
                CellItemWorkSpace NewCell = new CellItemWorkSpace
                {
                    CurrentCount = 0,
                    Types = (TypeSell)i,
                    Index = u,
                    Level = 0,
                    //  Icon = DataCellInfo.GetAllInfo[i].GetIcons[u]
                };
                DataInfo.InfoWorkSpaceLocation_2.Add(NewCell);
            }
        }
        SetInfoWorkSpace();
    }

}
