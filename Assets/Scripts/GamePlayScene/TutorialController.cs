using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TutorialController : Singleton<TutorialController>
{
    [SerializeField] private TutorialGenerator[] Tutorial;
    private Button[] InterectebleButtons;
    private int CurrentTutorialActiveGame, CurrentTutorialActiveStartGame;
    public Button[] GetInterectebleAllButton => InterectebleButtons;

    public Button[] SetInterectebleButton
    {
        set
        {
            InterectebleButtons = value;
        }
    }
    private void Start()
    {
        CurrentTutorialActiveGame = PlayerPrefs.GetInt("TutorialGameIndex", 0);
        CurrentTutorialActiveStartGame = PlayerPrefs.GetInt("TutorialStartMenuIndex", 0);
    }
    public void ActiveAllButton()
    {
        if (CurrentLocation.Instance.GetIndex != 0)
        {
            return;
        }
        if (InterectebleButtons != null)
        {
            for (int i = 0; i < InterectebleButtons.Length; i++)
            {
                InterectebleButtons[i].interactable = true;
            }
        }
    }
    public void ActiveTutorial(int _index)
    {
        if (CurrentLocation.Instance.GetIndex != 0)
        {
            return;
        }
        InterectebleButtons = GameObject.FindObjectsOfType<Button>();
        Tutorial[_index].gameObject.SetActive(true);
        PlayerPrefs.SetInt("TutorialGameIndex", _index + 1);
        Debug.Log("Current Tutorial " + _index + 1);
    }
    public void ActiveTutorialInStartMenu(int _index)
    {
        if (CurrentLocation.Instance.GetIndex != 0)
        {
            return;
        }
        InterectebleButtons = GameObject.FindObjectsOfType<Button>();
        if(Tutorial[_index] != null)
        {
            Tutorial[_index].gameObject.SetActive(true);
            PlayerPrefs.SetInt("TutorialStartMenuIndex", _index + 1);
        }
       

      
    }


}
