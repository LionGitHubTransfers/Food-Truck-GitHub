using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopButton : MonoBehaviour
{
    [SerializeField] private Image Icon;
    [SerializeField] private int Cost;
    [SerializeField] private int OpenOrClose;
    [SerializeField] private Button CurrentButton;
    [SerializeField] private Image Outline;
    [SerializeField] private TypeShop Type;
    [SerializeField] private Sprite[] SpriteIcon;
    [SerializeField] private Image BackGround;
    private ScrollPlaneScript ParantScroll;
    private int Index;
    public TypeShop GetType => Type;
    private void Start()
    {
        CurrentButton.onClick.AddListener(Click);
    }
    public ScrollPlaneScript SetScrollParent
    {
        set
        {

            ParantScroll = value;
    
        }
    }
   
    public void SetInfo(Sprite _icon, int _cost, int _OpenOrClose, TypeShop _type, int _index)
    {
        Index = _index;
        Type = _type;
        OpenOrClose = _OpenOrClose;
        Cost = _cost;
        Icon.sprite = _icon;
        if (OpenOrClose == 0)
        {
            Icon.color = new Color32(0, 0, 16, 100);
        }
    }
    public void Click()
    {
        ParantScroll.OpenCurrentButton(Index,this);
        ActiveBackGround(true);
        OpenOrCloseButton();
    }
    public void OpenOrCloseButton()
    {
        
        ShopController.Instance.OpenObject(Type, Index);
        if (OpenOrClose == 1)
        {
            PlayerPrefs.SetInt(GetTypePlayerPrefs(Type), Index);
            ShopController.Instance.SetInfoCell("Open",this,true);
            Outline.gameObject.SetActive(true);
        }
        else
        {
            ShopController.Instance.SetInfoCell(Cost.ToString(),this);
           
        }
    }
    public void ActiveBackGround(bool _Active)
    {
        BackGround.sprite = _Active == false ? SpriteIcon[0] : SpriteIcon[1];
      
        OpenOrCloseButton();
    }
    public void CloseOutline()
    {
        Outline.gameObject.SetActive(false);
    }
    public void Buy()
    {
        if(MoneyController.Instance.GetCurrentMoney >= Cost)
        {
            OpenOrClose = 1;
            Icon.color = Color.white;
            JsonController.Instance.SaveBuyNewSkin(Type, Index);
            MoneyController.Instance.SetMoney = -Cost;
            StartMenuButtonController.Instance.CheckMoneyAllButton();
            PlayerPrefs.SetInt(GetTypePlayerPrefs(Type), Index);
            EventManager.Instance.SendEventBuyShop(Type.ToString(), Index);
            Click();
        }
        
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
