using DG.Tweening;
using LionStudios.Suite.Analytics;

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class LevelController : Singleton<LevelController>
{
    [SerializeField] private LevelsLocation[] Levels;
    [SerializeField] private GameObject[] ObjectPlayer;
    [SerializeField] private GameObject[] Points;
    [SerializeField] private GameObject CellPrefabs;
    private int CurrentLevel;
    private List<GameObject> Players = new List<GameObject>();
    private Level FirstCharaster;
    private InfoCharaster BonusCharaster;
    private InfoCharaster[] StartInfoCurrentLevel;
    private int CurrentLocationIndex;
    ScriptebleObjectLevel CurrentLevelObj;
    public GameObject GetCurrentCharaster => Players[0];
    public int GetCountPlayer => Players.Count;
    private void Start()
    {
        CurrentLocationIndex = CurrentLocation.Instance.GetIndex;


        LionAnalytics.LevelStart(PlayerPrefs.GetInt("CurrentLevelMax_"+ CurrentLocation.Instance.GetIndex, 0) + 1, 1);
       
        
        SpawnLevel();
        StartCoroutine(TimerSdk());
    }
    private IEnumerator TimerSdk()
    {
        yield return new WaitForSeconds(0.3f);
       
    }
    public void SpawnLevel()
    {
        
        int index = PlayerPrefs.GetInt("CurrentLevel" + CurrentLocation.Instance.GetIndex, 0);
        int convertedIndex = index - (int)(index / Levels[CurrentLocationIndex].Levels.Length) * Levels[CurrentLocationIndex].Levels.Length;
        CurrentLevel = convertedIndex;

        CurrentLevelObj = Levels[CurrentLocationIndex].Levels[CurrentLevel];
        

       StartInfoCurrentLevel = new InfoCharaster[Levels[CurrentLocationIndex].Levels[CurrentLevel].GetInfo.Length];
        for (int i = 0; i < Levels[CurrentLocationIndex].Levels[CurrentLevel].GetInfo.Length; i++) //добавление что бы не ищезало в скриптеблобджекте
        {
            StartInfoCurrentLevel[i].Index = Levels[CurrentLocationIndex].Levels[CurrentLevel].GetInfo[i].Index;
            StartInfoCurrentLevel[i]._typeCell = Levels[CurrentLocationIndex].Levels[CurrentLevel].GetInfo[i]._typeCell;
            StartInfoCurrentLevel[i].Salt = Levels[CurrentLocationIndex].Levels[CurrentLevel].GetInfo[i].Salt;
            StartInfoCurrentLevel[i].Grill = Levels[CurrentLocationIndex].Levels[CurrentLevel].GetInfo[i].Grill;

            for (int u = 0; u < StartInfoCurrentLevel[i]._typeCell.Length; u++)
            {
                if(StartInfoCurrentLevel[i]._typeCell[u] == TypeSell.Bonus)
                {
                    int RandomBonus = Random.Range(0, PlayerPrefs.GetInt(StaticInfo.AlchimyOpen + CurrentLocation.Instance.GetIndex, 0));
                    StartInfoCurrentLevel[i].Index[u] = RandomBonus;
                }
            }
        }
        

        //if (CurrentLevel % 2 == 1 && PlayerPrefs.GetInt(StaticInfo.AlchimyOpen,0)>0)
        //{
        //    Debug.Log("BonusLevel");

          
        //    CurrentLevelObj.GetInfo[Random.Range(0, CurrentLevelObj.GetInfo.Length)].SetBonusCharaster(TypeSell.Bonus, RandomBonus);
        //}

        for (int i = 0; i < CurrentLevelObj.GetCountCurrentLevel(); i++)
        {
            var CurrentLevevSpawn = Instantiate(ObjectPlayer[Random.Range(0, ObjectPlayer.Length)], transform);
            CurrentLevevSpawn.transform.position = Points[i].transform.position;
            CurrentLevevSpawn.transform.eulerAngles = Points[i].transform.eulerAngles;
            Players.Add(CurrentLevevSpawn);
            BonusCharaster = CurrentLevelObj.GetCharasterInfo(i);
            CurrentLevevSpawn.GetComponent<Level>().SetInfo(BonusCharaster);

            if (i == 0)
            {
                FirstCharaster = CurrentLevevSpawn.GetComponent<Level>();

            }
        }

      
            for (int i = 0; i < CurrentLevelObj.GetInfoBonus.GetIndex.Length; i++)
            {
                GameObject OpenCell = GridCellController.Instance.GetOpenCell();
              
                var CellItem = Instantiate(CellPrefabs, OpenCell.transform);
                CellItem.transform.localPosition = Vector3.zero;
                CellItem.GetComponent<CellScript>().SetInfoCell(CurrentLevelObj.GetInfoBonus.GetTypePlayer[i], CurrentLevelObj.GetInfoBonus.GetIndex[i]);
            }

        
        CurrentLevelObj.SetStartInfo = StartInfoCurrentLevel;

        
    }

    public void StartGame()
    {
     
        FirstCharaster.ActiveGrid();
    }
    public void NextPlayer()
    {
        if (Players[0].GetComponent<Level>())
        {

        }
        Players[0].GetComponent<Level>().ActiveFinishAnim();
        Players.Remove(Players[0]);


    }
    public void TimerNextPlayer()
    {
        if (Players.Count <= 0)
        {
            UiController.Instance.OpenWinContainer();
        }
        else
        {
            for (int i = 0; i < Players.Count; i++)
            {
                Players[i].GetComponent<Level>().MovePoint(Points[i], i);
            }
        }
    }
    public void NextLevel()
    {
        VirtualCurrency coins = new VirtualCurrency("Coins", "Basic", PlayerPrefs.GetInt(StaticInfo.Money, 0));
        VirtualCurrency gems = new VirtualCurrency("Gems", "Premium", PlayerPrefs.GetInt(StaticInfo.Diamon, 0));
        Product Products = new Product();
        Products.AddVirtualCurrency(coins);
        Products.AddVirtualCurrency(gems);
        Reward treasureChest = new Reward(Products);
        LionAnalytics.LevelComplete(PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1, 1, reward: treasureChest);

       
        CurrentLevel++;
       

        PlayerPrefs.SetInt("CurrentLevel" + CurrentLocation.Instance.GetIndex, CurrentLevel);
        PlayerPrefs.SetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) +1);
        OpenCellController.Instance.CheckOpenInstrument();
    }


}
[System.Serializable]
public class LevelsLocation
{
    public ScriptebleObjectLevel[] Levels;
}
