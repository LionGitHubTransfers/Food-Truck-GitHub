using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Table : Singleton<Table>
{
    [SerializeField] private GameObject[] CenterObject;
    [SerializeField] private GameObject PrefabsPodnos;
    [SerializeField] private GameObject TableSpawn;
    [SerializeField] private ParticleSystem EffectSpawn;
    [SerializeField] private Material BackGroundMaterial;
    [SerializeField] private Texture[] BackGroundSprites;
    private GameObject SpawnPodnos;


    private List<GameObject> CurrentObject = new List<GameObject>();
    private int IndexCount;
    public GameObject GetCurrentObject => SpawnPodnos;


    private void Start()
    {
        SpawnPodnos = Instantiate(PrefabsPodnos, TableSpawn.transform);
        CenterObject = SpawnPodnos.GetComponent<Podnos>().GetCenters;
        BackGroundMaterial.mainTexture = BackGroundSprites[CurrentLocation.Instance.GetIndex];
    }
    public void SpawnObject(GameObject _model , int _countObject,TypeSell _typeCell, int IndexCell,bool Salt = false,bool GrillActive = false)
    {

        GameObject Obj = null;
        if (_countObject > 1)
        {
            IndexCount++;
            Obj = Instantiate(_model, CenterObject[IndexCount].transform);
            Obj.transform.localScale = _model.transform.localScale/1.5f;
           // Obj.SetActive(false);
            CurrentObject.Add(Obj);
            if (BonusCellController.Instance.SaltActive && Salt)
            {
                Obj.GetComponent<ModelSprite>().SetNewSprite(DataController.Instance.GetData.GetCellNewSpriteInSalt(_typeCell, IndexCell, BonusCellController.Instance.GetIndexSalt));
               
            }
            if (GrillActive)
            {
                Obj.GetComponent<ModelSprite>().SetColorGrill();
                
            }
        }
        else
        {
            Obj = Instantiate(_model, CenterObject[0].transform);
          //  Obj.SetActive(false);
            CurrentObject.Add(Obj);
            if (BonusCellController.Instance.SaltActive)
            {
                Obj.GetComponent<ModelSprite>().SetNewSprite(DataController.Instance.GetData.GetCellNewSpriteInSalt(_typeCell, IndexCell, BonusCellController.Instance.GetIndexSalt));
            }
            if (GrillActive)
            {
                Obj.GetComponent<ModelSprite>().SetColorGrill();

            }
        }
        EffectSpawn.Play();

    }
    public void SpawnAllObject()
    {
      
        for (int i = 0; i < CurrentObject.Count; i++)
        {
            CurrentObject[i].SetActive(true);
        }
    }
    //public void OneRotateChan()
    //{
    //    SpawnPodnos.GetComponent<Podnos>().OneRotateAnim();
    //}
    public void ActiveChanAnim(bool _finishAnim)
    {
        if (_finishAnim)
        {
            SpawnPodnos.GetComponent<Podnos>().FinishAnim();
        }
        //else
        //{
        //    SpawnPodnos.GetComponent<Podnos>().ActiveAnimChan();
        //}
    }
    public void Cleaner()
    {
        SpawnPodnos = Instantiate(PrefabsPodnos, TableSpawn.transform);
        Vector3 StartPos = SpawnPodnos.transform.localScale;
        SpawnPodnos.transform.localScale = Vector3.zero;
        CenterObject = SpawnPodnos.GetComponent<Podnos>().GetCenters;

        Sequence NewSequnce = DOTween.Sequence()
            .AppendInterval(0.5f)
            .Append(SpawnPodnos.transform.DOScale(StartPos, 0.5f));
        CurrentObject.Clear();
        IndexCount = 0;
    }
}
