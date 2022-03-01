using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GridCellController : Singleton<GridCellController>
{
    [SerializeField] private GameObject[] Cells;
    [SerializeField] private List<CellScript> AllCellInGrid = new List<CellScript>();


    public CellScript AddCell
    {
        set
        {
            AllCellInGrid.Add(value);
        }
    }

    public List<CellScript> GetAllCellOpen => AllCellInGrid;
    public CellScript DeleteCell
    {
        set
        {
            AllCellInGrid.Remove(value);
        }
    }
    public GameObject[] GetAllCells => Cells;
    public GameObject GetOpenCell()
    {
        GameObject Cell = Cells.OrderBy(a => System.Guid.NewGuid()).FirstOrDefault(x => x.GetComponentInChildren<CellScript>() == null);

        return Cell;
    }
    public GameObject GetCurrentCell(string _name)
    {
        GameObject Cell = Cells.FirstOrDefault(x => x.name == _name);

        return Cell;
    }
}
