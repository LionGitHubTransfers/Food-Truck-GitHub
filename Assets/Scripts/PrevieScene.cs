using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PrevieScene : Singleton<PrevieScene>
{
    [SerializeField] private Image m_LoadProgress;

    private void Start()
    {

        Application.targetFrameRate = 60;
        StartCoroutine(LoadScene());
    }
   public void LoadSceneActive(){
     StartCoroutine(LoadScene());
   }

    private IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(0f);
        GameAnalytics.NewDesignEvent("PrevieSceneComplete", 0);
        AsyncOperation m_SceneLoading = null;
        if (PlayerPrefs.GetInt("CurrentLevelMax_" + 0, 0) < 3)
        {
            m_SceneLoading = SceneManager.LoadSceneAsync(2);
        }
        else
        {
            m_SceneLoading = SceneManager.LoadSceneAsync(1);
        }


        while (!m_SceneLoading.isDone)
        {
            float newValue = Mathf.Clamp01(m_SceneLoading.progress / 0.9f);
            if (m_LoadProgress.fillAmount < newValue)
                m_LoadProgress.fillAmount = newValue;
            yield return null;
        }
    }
}
