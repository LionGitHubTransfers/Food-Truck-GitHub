using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    public enum DDNAEventType
    {
        undefined,
        missionStarted,
        missionCompleted,
        missionFailed,
        missionAbandoned,
        adRequest,
        adShow,
        transaction,
        itemCollected,
        prediction,
        abTest,
        debug
    }
}