using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CurrentLocation : Singleton<CurrentLocation>
{
    [SerializeField] private Button FirstLocationButton, SecondLocationButton;
    [SerializeField] private int CurrentIndexLocation;
    [SerializeField] private StartMenuUiController StartMenuUI;
    public int GetIndex => CurrentIndexLocation;

    
    private void Start()
    {
        CurrentIndexLocation = PlayerPrefs.GetInt("CurrentIndexLocation", 0);
        if (FirstLocationButton)
        {

            FirstLocationButton.onClick.AddListener(delegate { ActiveLocation(0); });
            SecondLocationButton.onClick.AddListener(delegate { ActiveLocation(1); });
        }
    }
    public void ActiveLocation(int Index)
    {
        JsonController.Instance.SaveField();
        CurrentIndexLocation = Index;
        PlayerPrefs.SetInt("CurrentIndexLocation", CurrentIndexLocation);
        JsonController.Instance.LoadField();
        DataController.Instance.Start();
        StartMenuUI.TestButtonLocation();
    }
}
