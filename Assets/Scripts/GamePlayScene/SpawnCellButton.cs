using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class SpawnCellButton : MonoBehaviour
{
    [SerializeField] private GameObject CellPrefabs;
    [SerializeField] private Sprite[] OpenSprite;
    [SerializeField] private Sprite CloseSprite;
    [SerializeField] private Image CloseImage;
    [SerializeField] private TypeSell Types;
    [SerializeField] private Image Icon;
    private Button CurrentButton;
    private int ClickTutorial;
   
    private void Start()
    {
        CurrentButton = GetComponent<Button>();
        CurrentButton.onClick.AddListener(SpawnCell);
       

    }
    
    public void SpawnCell()
    {
            if (GridCellController.Instance.GetOpenCell() != null && PlayerPrefs.GetInt(StaticInfo.Energy, 100)>0)
            {
                transform.DOScale(1.3f, 0.1f).OnComplete(() =>
                {
                    transform.DOScale(1f, 0.1f);

                });
                GameObject FinishObject = GridCellController.Instance.GetOpenCell();
                Vector3 FinishPos = FinishObject.transform.position;
                
                    EnegryController.Instance.SetEnergy = 1;
                
              
                var CellItem = Instantiate(CellPrefabs, FinishObject.transform);
                CellItem.transform.position = transform.position;
                CellItem.transform.DOLocalMove(Vector3.zero, 0.3f).OnComplete(()=> {

                    if (TutorialGenerator.Instance != null)
                    {
                        TutorialGenerator.Instance.NextClick(CellItem, 0);
                    }
                });
      
            CellItem.GetComponent<CellScript>().SetInfoCell(Types, 0);

            VibrationController.Instance.VibrateWithTypeSelection();
        }
        
       
    }
    
    
    public void OpenButton()
    {
        GetComponent<Button>().interactable = true;
        Icon.sprite = OpenSprite[PlayerPrefs.GetInt("CurrentIndexLocation", 0)];
        Icon.enabled = true;
        CloseImage.gameObject.SetActive(false);
    }
    public void CloseButton()
    {
        CloseImage.gameObject.SetActive(true);
        GetComponent<Button>().interactable = false;
        Icon.sprite = CloseSprite;
        Icon.enabled = false;
    }
}
