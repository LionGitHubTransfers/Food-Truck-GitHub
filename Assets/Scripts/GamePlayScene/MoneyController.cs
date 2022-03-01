using DG.Tweening;
using LionStudios.Suite.Analytics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class MoneyController : Singleton<MoneyController>
{
    [SerializeField] private Text MoneyText, DiamondText;
    [SerializeField] private Transform PosTargetMoney, PosTargetDiamond;

    public Transform GetPosTargetMoney => PosTargetMoney;

    public Transform GetPosTargetDiamond => PosTargetDiamond;
    private void Start()
    {
       

        MoneyText.text =  PlayerPrefs.GetInt(StaticInfo.Money, 0).ToString();
        DiamondText.text = PlayerPrefs.GetInt(StaticInfo.Diamon, 0).ToString();


    }
    public int GetCurrentMoney => PlayerPrefs.GetInt(StaticInfo.Money, 0);
    public int SetMoney
    {
        set
        {
            int Money = PlayerPrefs.GetInt(StaticInfo.Money, 0);
            Money += value;
            PlayerPrefs.SetInt(StaticInfo.Money, Money);
            MoneyText.DOText(PlayerPrefs.GetInt(StaticInfo.Money, 0).ToString(),0.3f,true,ScrambleMode.Numerals);
           
        }
    }
    public int SetDiamond
    {
        set
        {
            int Diamond = PlayerPrefs.GetInt(StaticInfo.Diamon, 0);
            Diamond += value;
            PlayerPrefs.SetInt(StaticInfo.Diamon, Diamond);
            DiamondText.DOText(PlayerPrefs.GetInt(StaticInfo.Diamon, 0).ToString(), 0.3f, true, ScrambleMode.Numerals);
        }
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.M))
        {
            SetMoney = 1000;
            SetDiamond = 10;
        }
    }
   



}
