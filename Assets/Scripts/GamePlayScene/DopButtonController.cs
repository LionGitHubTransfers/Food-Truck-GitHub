using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UIAnimatorCore;
using UnityEngine;
using UnityEngine.UI;

public class DopButtonController : Singleton<DopButtonController>
{
    [SerializeField] private SpawnCellButton[] DopButton;
    [SerializeField] private CanvasGroup RecipesCointainer;
    [SerializeField] private Button RecepesButton, ExitButton;
    [SerializeField] private PrefabsRecipesLocation[] PrefabsRecipes;
    [SerializeField] private GameObject PrefabsCloseRecipes;
    [SerializeField] private GameObject GridRecipes;
    
    private int OpenIndexButton;


    public int GetCountDopButton => DopButton.Length;


    private void Start()
    {
        if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) < 1)
        {
            RecepesButton.gameObject.SetActive(false);
        }
       RecepesButton.onClick.AddListener(ActiveRecipesContainer);
        ExitButton.onClick.AddListener(CloseRecipesContainer);
        OpenIndexButton = PlayerPrefs.GetInt("DopButton" + CurrentLocation.Instance.GetIndex, 0);

        ActiveDopButton();
    }
    public void ActiveDopButton()
    {
         int CountOpenButton = OpenIndexButton+1;
        for (int i = 0; i < 6; i++)
        {
            if (CountOpenButton != 0)
            {
                Instantiate(PrefabsRecipes[CurrentLocation.Instance.GetIndex].PrefabsRecipes[i], GridRecipes.transform);
                CountOpenButton--;
            }
            else
            {
                Instantiate(PrefabsCloseRecipes, GridRecipes.transform);
            }
        }
        if(OpenIndexButton + 1 < DopButton.Length)
        {
           // UiController.Instance.OpenDopSprite(DopButton[OpenIndexButton + 1].GetOpenSprite);
        }
      

        for (int i = 0; i < DopButton.Length; i++)
        {
            DopButton[i].CloseButton();
        }
        for (int i = 0; i < OpenIndexButton+1; i++)
        {

            if (i < DopButton.Length)
            {
                DopButton[i].OpenButton();
            }
          
        }
    }
    private void ActiveRecipesContainer()
    {
        EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.open_recipe.ToString());
        UiController.Instance.CloseGridUp();
        if (TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.NextClick(ExitButton.gameObject,0);
            TutorialGenerator.Instance.ActiveDopObject(true);
        }
        RecipesCointainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro);
        RecipesCointainer.blocksRaycasts = true;
    }
    private void CloseRecipesContainer()
    {
        UiController.Instance.OpenGridUp();
        RecipesCointainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Outro);
        RecipesCointainer.blocksRaycasts = false;

        if (TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.CloseAllTutorial();
            TutorialController.Instance.ActiveAllButton();
            TutorialGenerator.Instance.ActiveDopObject(false);
        }

    }
    //public void NextOpenDopButton()
    //{
    //    PlayerPrefs.SetInt("DopButton", OpenIndexButton + 1);
    //}
}
[System.Serializable]
public class PrefabsRecipesLocation
{
    public GameObject[] PrefabsRecipes;
}
