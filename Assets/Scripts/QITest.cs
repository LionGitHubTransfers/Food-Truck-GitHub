using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class QITest : MonoBehaviour
{
    [SerializeField] private Slider SliderUI;
    [SerializeField] private Button MoneyButton,ResetGameButton,CloseUi;
    [SerializeField] private CanvasGroup[] AllUI;
    [SerializeField] private CanvasGroup CurrentUI;
    private int UiFadeIndex = 1;
    private void Start()
    {
        MoneyButton.onClick.AddListener(MoneyClick);
        ResetGameButton.onClick.AddListener(ResetGameButtonClick);
        CloseUi.onClick.AddListener(CloseUiClick);
        

    }
    private void Update()
    {
        CurrentUI.alpha = SliderUI.value;
    }
    private void MoneyClick()
    {
        MoneyController.Instance.SetMoney = 100000;
        MoneyController.Instance.SetDiamond = 100000;

    }
    private void ResetGameButtonClick()
    {
        PlayerPrefs.DeleteAll();
        SceneManager.LoadScene(1);
    }
    private void CloseUiClick()
    {
        UiFadeIndex = UiFadeIndex == 1 ? 0 : 1;
        for (int i = 0; i < AllUI.Length; i++)
        {
            AllUI[i].alpha = UiFadeIndex;
        }
    }
}
