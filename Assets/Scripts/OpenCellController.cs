using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
public class OpenCellController : Singleton<OpenCellController>
{
    [SerializeField] private ArrayCell[] AllCellOpen;
    [SerializeField] List<ArrayCell> OpenCellArray = new List<ArrayCell>();
    [SerializeField] private int[] OpenInstruments;
    [SerializeField] private int OpenIndex;
    private void Start()
    {
        OpenIndex = PlayerPrefs.GetInt("OpenCellIndex" + CurrentLocation.Instance.GetIndex, 1);
        OpenCellArray.Clear();
        for (int i = 0; i < OpenIndex; i++)
        {
            if (i < AllCellOpen.Length)
            {
                OpenCellArray.Add(AllCellOpen[i]);
            }
        }

    }
    public void CheckOpenInstrument()
    {
        for (int i = 0; i < OpenInstruments.Length; i++)
        {
            int CurrentInstrumentOpen = PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1;

            if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1 >= OpenInstruments[i])
            {
                PlayerPrefs.SetInt("DopButton" + CurrentLocation.Instance.GetIndex, i + 1);
            }
        }
    }
    
    public bool OpenOrNoCell(TypeSell _type, int _Index)
    {
        bool Open = false;

        for (int i = 0; i < OpenCellArray.Count; i++)
        {
            bool CellOpen = false;
            for (int u = 0; u < OpenCellArray[i].ArrayCellOpen.Length; u++)
            {
                if (OpenCellArray[i].ArrayCellOpen[u].Type == _type && OpenCellArray[i].ArrayCellOpen[u].Index == _Index)
                {
                    CellOpen = true;
                }
            }
            if (CellOpen)
            {
                Open = true;
                break;
            }

        }
        return Open;
    }
}
[System.Serializable]
public class CellOpen
{
    public TypeSell Type;
    public int Index;

}
[System.Serializable]
public class ArrayCell
{
    public CellOpen[] ArrayCellOpen;
}
