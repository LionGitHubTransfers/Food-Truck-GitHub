using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrillCell : Singleton<GrillCell>
{
    
    
    public void ActiveGrillCell(bool _active)
    {
        GetComponent<Collider>().enabled = _active;
    }
}
