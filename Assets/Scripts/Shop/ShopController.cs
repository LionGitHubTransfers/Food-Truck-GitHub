using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using static JsonController;

public class ShopController : Singleton<ShopController>
{
    [SerializeField] private GameObject[] Grid;
    [SerializeField] private ShopButton PrefabButton;
    [SerializeField] private CanvasGroup[] Scrolls;
    [SerializeField] private Text TextCell;
    [SerializeField] private Button BuyButton;
    [SerializeField] private Button[] UpButton;
    [SerializeField] private Sprite[] IconUpButton;
    [SerializeField] private Vector3[] PosMoveCamera;
    [SerializeField] private GameObject SceneObject;
    [SerializeField] private ObjectShop[] AllObjectShop;
    private CanvasGroup CurrenOpenScroll;
    private ShopButton CurrentButton;
    private bool ActivaCamera;

    public GameObject GetSceneObject
    {
        get
        {
            OpenScrollIndex(2);
            return SceneObject;
        }
    }
    private void Start()
    {
        CurrenOpenScroll = Scrolls[2];
        BuyButton.onClick.AddListener(BuySkin);
        ShopInfo shopInfo = JsonController.Instance.DataInfo.InfoShop;
        int IndexGrid = 0;
        for (int u = 0; u < 3; u++)
        {
            for (int i = 0; i < DataShop.Instance.GetShopData[u].GetAllInfo.Length; i++)
            {
                ShopButton NewButton = Instantiate(PrefabButton, Grid[i >= 6 ? IndexGrid + 1 : IndexGrid].transform);
                Shop ShopInfo = DataShop.Instance.GetShopData[u].GetAllInfo[i];
                Scrolls[u].GetComponent<ScrollPlaneScript>().AddButton = NewButton;
                if (u == 0)
                {
                    NewButton.SetInfo(ShopInfo.GetIcons, ShopInfo.GetCost, shopInfo.Plate[i], ShopInfo.GetTypes, i);
                    if (PlayerPrefs.GetInt(StaticInfo.PlateIndex) == i)
                    {
                        Scrolls[u].GetComponent<ScrollPlaneScript>().OpenCurrentButton(i, NewButton);
                    }

                }
                else if (u == 1)
                {
                    NewButton.SetInfo(ShopInfo.GetIcons, ShopInfo.GetCost, shopInfo.Bank[i], ShopInfo.GetTypes, i);
                    if (PlayerPrefs.GetInt(StaticInfo.BankIndex) == i)
                    {
                        Scrolls[u].GetComponent<ScrollPlaneScript>().OpenCurrentButton(i, NewButton);
                    }
                }
                else if (u == 2)
                {
                    NewButton.SetInfo(ShopInfo.GetIcons, ShopInfo.GetCost, shopInfo.BackGround[i], ShopInfo.GetTypes, i);
                    if (PlayerPrefs.GetInt(StaticInfo.BackGroundIndex) == i)
                    {
                        Scrolls[u].GetComponent<ScrollPlaneScript>().OpenCurrentButton(i, NewButton);
                    }
                }
                


            }
            IndexGrid += 2;
        }
        OpenScrollIndex(2);
    }
    public void SetInfoCell(string _text,ShopButton _button,bool _open =false)
    {
        if (_open)
        {
            BuyButton.gameObject.SetActive(false);
        }
        else
        {
            BuyButton.gameObject.SetActive(true);
        }
        TextCell.text = _text;
        CurrentButton = _button;
    }
    private void BuySkin()
    {
        CurrentButton.Buy();
    }
    public void OpenObject(TypeShop _type,int _index)
    {
        ObjectShop CurrentObjectType = AllObjectShop.FirstOrDefault(a => a._typeShop == _type);
        CurrentObjectType.ObjectActive[_index].SetActive(true);
        if (CurrentObjectType.CurrentOpenObject != null)
        {
            CurrentObjectType.CurrentOpenObject.SetActive(false);
        }

        CurrentObjectType.CurrentOpenObject = CurrentObjectType.ObjectActive[_index];
        CurrentObjectType.CurrentOpenObject.SetActive(true);
    }
    public void OpenScrollIndex(int _index)
    {
        for (int i = 0; i < UpButton.Length; i++)
        {
            UpButton[i].GetComponent<Image>().sprite = IconUpButton[0];
        }
        UpButton[_index].GetComponent<Image>().sprite = IconUpButton[1];
        CurrenOpenScroll.blocksRaycasts = false;
        CurrenOpenScroll.DOFade(0, 0.2f);
        Scrolls[_index].DOFade(1, 0.21f).OnComplete(() =>
        {
            CurrenOpenScroll = Scrolls[_index];
            CurrenOpenScroll.blocksRaycasts = true;
        });

        Scrolls[_index].GetComponent<ScrollPlaneScript>().CheckOpen();

        if (ActivaCamera)
        {
            CameraAnim.Instance.MovePosShop(PosMoveCamera[_index]);
        }
        else
        {
            ActivaCamera = true;
        }
       
    }
}
[Serializable]
public class ObjectShop
{
    public TypeShop _typeShop;
    public GameObject[] ObjectActive;
    public GameObject CurrentOpenObject;
}


