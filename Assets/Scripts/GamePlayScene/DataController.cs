using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DataController : Singleton<DataController>
{
    [SerializeField] private ScriptebleObjectCellInfo[] DataLocation;
    [SerializeField] private ScriptebleObjectCellInfo Data;
    [SerializeField] private ScriptebleObjectAlchimyLevel[] AlchimyLevels;

    public ScriptebleObjectCellInfo[] GetlocationData => DataLocation;
    public ScriptebleObjectCellInfo GetData => Data;
    public ScriptebleObjectAlchimyLevel[] GetAlchimyLevels => AlchimyLevels;
    public void Start()
    {
        Data = DataLocation[PlayerPrefs.GetInt("CurrentIndexLocation", 0)];
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            SceneManager.LoadScene(1);
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            SceneManager.LoadScene(2);
        }
    }
}
