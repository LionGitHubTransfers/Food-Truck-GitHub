using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocationUiController : Singleton<LocationUiController>
{
    [SerializeField] private Image Bar;
    [SerializeField] private Text Prossent;
    [SerializeField] private Sprite[] ButtonGoAndBack;
    [SerializeField] private Sprite[] SpritesNameLocation;
    [SerializeField] private Sprite[] CenteSprites;
    [SerializeField] private Image CenterIcon;
    [SerializeField] private Image NameLocation;
    [SerializeField] private Button GoOrBackButton,LeftButtom,RightButton;
    [SerializeField] private GameObject ContainerStarOpen;
    [SerializeField] private Text TextCountStars;
    private float ProgressBarLocation;
    private int CurrentLocationActive;
    private void Start()
    {
        CurrentLocationActive = CurrentLocation.Instance.GetIndex;
        RightButton.onClick.AddListener(delegate { ClickNextLocation(1); });
        LeftButtom.onClick.AddListener(delegate { ClickNextLocation(0); });
        GoOrBackButton.onClick.AddListener(GoLocation);
        
    }
    private void CheckOpenLocation()
    {
         Bar.fillAmount = PlayerPrefs.GetFloat("ProgressBarLocation" + CurrentLocationActive,0);
         Prossent.text = (Bar.fillAmount * 100).ToString() + "%";
    }
    public void UpdateBar()
    {
        PlayerPrefs.SetFloat("ProgressBarLocation" + CurrentLocationActive, StartMenuButtonController.Instance.GetCurrentFillAmount);
        TextCountStars.text = StartMenuButtonController.Instance.GetCurrentCountStars.ToString() + "/25";
    }
    public void OpenContainer()
    {
        
        CurrentLocationActive = CurrentLocation.Instance.GetIndex;
    
        ProgressBarLocation = PlayerPrefs.GetFloat("ProgressBarLocation" + CurrentLocationActive, 0);
        CheckOpenLocation();
        GetComponent<CanvasGroup>().DOFade(1, 0.3f).OnComplete(() =>
        {
            GetComponent<CanvasGroup>().blocksRaycasts = true;
           
        });
        TextCountStars.text = StartMenuButtonController.Instance.GetCurrentCountStars.ToString() + "/25";
        ClickNextLocation(CurrentLocationActive);
    }
    private void GoLocation()
    {
        if(PlayerPrefs.GetFloat("ProgressBarLocation" + 0, 0) >= 0.5f && CurrentLocationActive>0)
        {
            CurrentLocation.Instance.ActiveLocation(CurrentLocationActive);
            RatingController.Instance.CloseAnimRatingObject();
        }
        else if (CurrentLocationActive == 0)
        {
            CurrentLocation.Instance.ActiveLocation(CurrentLocationActive);
        }
        else
        {
            CurrentLocation.Instance.ActiveLocation(0);
        }

      
    }
    private void ClickNextLocation(int _index)
    {
        CurrentLocationActive = _index;

        if(CurrentLocationActive == 0)
        {
            RightButton.gameObject.SetActive(true);
            LeftButtom.gameObject.SetActive(false);
        }
        else if(CurrentLocationActive == 1)
        {
            RightButton.gameObject.SetActive(false);
            LeftButtom.gameObject.SetActive(true);
        }
        CenterIcon.sprite = CenteSprites[CurrentLocationActive];
       
        NameLocation.sprite = SpritesNameLocation[CurrentLocationActive];

        if (PlayerPrefs.GetFloat("ProgressBarLocation" + 0, 0) >= 0.5f && CurrentLocationActive > 0)
        {
            GoOrBackButton.GetComponent<Image>().sprite = ButtonGoAndBack[0];
            ContainerStarOpen.SetActive(false);

        }
        else if(CurrentLocationActive==0)
        {
            ContainerStarOpen.SetActive(false);
            GoOrBackButton.GetComponent<Image>().sprite = ButtonGoAndBack[0];
        }
        else
        {
            ContainerStarOpen.SetActive(true);
            GoOrBackButton.GetComponent<Image>().sprite = ButtonGoAndBack[1];
        }

        CheckOpenLocation();
    }

}
