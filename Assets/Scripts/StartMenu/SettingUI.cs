using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingUI : MonoBehaviour
{
    [SerializeField] private Sprite[] ActiveVibroSprite;
    [SerializeField] private Image VibroImage;
    [SerializeField] private Button VibroButton;
    private int ActiveVibro = 1;
    private void Start()
    {
        ActiveVibro = PlayerPrefs.GetInt("SettingVibro", 1);
        VibroButton.onClick.AddListener(ClickVibro);
        CheckVibro();
    }

    private void ClickVibro()
    {
        ActiveVibro = ActiveVibro == 1 ? 0 : 1;
        PlayerPrefs.SetInt("SettingVibro", ActiveVibro);

        CheckVibro();
    }
    private void CheckVibro()
    {
        if(ActiveVibro == 1)
        {
            VibrationController.Instance.VibroActive = true;
            VibroImage.sprite = ActiveVibroSprite[0];
        }
        else
        {
          
            VibrationController.Instance.VibroActive = false;
            VibroImage.sprite = ActiveVibroSprite[1];
        }
    }
}
