using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBarController : Singleton<ProgressBarController>
{
    [SerializeField] private AllBarsLocations[] AllBarFinish;
    [SerializeField] private int OpenIndex;
    private void Start()
    {
        OpenIndex = PlayerPrefs.GetInt("OpenCellIndex" + CurrentLocation.Instance.GetIndex, 1);
        if(PlayerPrefs.GetInt("NextBarIndex" + CurrentLocation.Instance.GetIndex, 0) < 5)
        {
            Instantiate(AllBarFinish[CurrentLocation.Instance.GetIndex].AllBarFinish[PlayerPrefs.GetInt("NextBarIndex" + CurrentLocation.Instance.GetIndex, 0)], transform);

        }
    }
    public void NextBarActive()
    {
        PlayerPrefs.SetInt("NextBarIndex" + CurrentLocation.Instance.GetIndex, PlayerPrefs.GetInt("NextBarIndex" + CurrentLocation.Instance.GetIndex, 0) + 1);
    }
    public void NextCellOpen()
    {
        OpenIndex++;
        PlayerPrefs.SetInt("OpenCellIndex" + CurrentLocation.Instance.GetIndex, OpenIndex);

        
    }
}
[System.Serializable]
public class AllBarsLocations
{
    public BarFinish[] AllBarFinish;
}
