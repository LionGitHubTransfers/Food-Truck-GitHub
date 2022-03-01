using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : Singleton<GameController>
{
    public enum GameState
    {
        Default,
        Game,
        Win,
        Lose
    }
    public GameState State = GameState.Game;
    // Start is called before the first frame update
   
}
