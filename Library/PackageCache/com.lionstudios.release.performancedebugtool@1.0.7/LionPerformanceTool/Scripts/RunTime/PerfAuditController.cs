using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PerfAuditController : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    public InputField fpsField;
    public InputField memoryField;
    public InputField freqField;
    public InputField batteryField;
    public InputField loadingField;
    public InputField sizeField;
    public InputField totalField;

    public GameObject mainWindow;


    public Image fpsLight;
    public Image memoryLight;
    public Image freqLight;
    public Image batteryLight;
    public Image loadingLight;
    public Image sizeLight;
    public Image totalLight; 


    public static PerfAuditController Inst;

    public Color orange;

    bool dragging;
    bool pause = false;

    private Vector2 lastMousePosition;


    float currentSceneTime = 0f;
    float lastSceneTime = 0f;

    float skippedTime = 0f;

    void Awake()
    {
        if (Inst == null)
            Inst = this;
    }

    void OnDestroy()
    {
        Inst = null;
    }

    void Start()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
        Reset();
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        currentSceneTime = Time.realtimeSinceStartup;
        if (currentSceneTime - lastSceneTime > 2f)
        {
            pause = true;
            StartCoroutine(WaitAndResume());
            lastSceneTime = currentSceneTime;
        }
        Debug.Log(scene.name + "just loaded! Perf tool pause for two secs");
    }

    IEnumerator WaitAndResume()
    {
        yield return WaitforSec;
        yield return WaitforSec;
        skippedTime += 2f;
        pause = false;
    }


    public void OnPressMin()
    {
        mainWindow.SetActive(false);
    }

    public void OnPressMax()
    {
        if (!mainWindow.activeInHierarchy && !dragging)
        {
            mainWindow.SetActive(true);
        }
    }


    public void OnBeginDrag(PointerEventData eventData)
    {
        lastMousePosition = eventData.position;
        dragging = true;
    }

    Vector2 currentMousePosition;
    Vector2 diff;
    Vector3 newPosition;
    Vector3 oldPos;

    public void OnDrag(PointerEventData eventData)
    {
        currentMousePosition = eventData.position;
        diff = currentMousePosition - lastMousePosition;
        RectTransform rect = GetComponent<RectTransform>();

        newPosition = rect.position + new Vector3(diff.x, diff.y, transform.position.z);
        oldPos = rect.position;
        rect.position = newPosition;
        if (!IsRectTransformInsideSreen(rect))
        {
            rect.position = oldPos;
        }
        lastMousePosition = currentMousePosition;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        dragging = false;
    }

    bool isInside;
    Vector3[] corners = new Vector3[4];
    Rect winRect = new Rect(0, 0, Screen.width, Screen.height);
    int visibleCorners = 0;

    private bool IsRectTransformInsideSreen(RectTransform rectTransform)
    {
        isInside = false;
        visibleCorners = 0;
        rectTransform.GetWorldCorners(corners);
        foreach (Vector3 corner in corners)
        {
            if (winRect.Contains(corner))
            {
                visibleCorners++;
            }
        }
        if (visibleCorners == 4)
        {
            isInside = true;
        }
        return isInside;
    }


    private Color GetFPSColorCode(float fps)
    {
        if (fps >= 45f)
            return Color.green;
        else if (fps < 45f && fps >= 28f)
            return Color.yellow;
        else if (fps < 28f && fps >= 15f)
            return orange;
        else
            return Color.red;
    }

    private Color GetMemoryColorCode(float mb)
    {
        if (mb < 30f)
            return Color.green;
        else if (mb >= 30f && mb < 45f)
            return Color.yellow;
        else if (mb >= 45f && mb < 60f)
            return orange;
        else
            return Color.red;
    }

    private Color GetFreqColorCode(float freq)
    {
        if (freq < 5f)
            return Color.green;
        else if (freq >= 5f && freq < 10f)
            return Color.yellow;
        else if (freq >= 10f && freq < 18f)
            return orange;
        else
            return Color.red;
    }

    private Color GetBatteryColorCode(float percent)
    {
        if (percent < 0.01f)
            return Color.green;
        else if (percent >= 0.01f && percent < 0.02f)
            return Color.yellow;
        else if (percent >= 0.02f && percent < 0.03f)
            return orange;
        else
            return Color.red;
    }

    private Color GetLoadTimeColorCode(int sec)
    {
        if (sec < 8)
            return Color.green;
        else if (sec >= 8 && sec < 11)
            return Color.yellow;
        else if (sec >= 11 && sec < 15)
            return orange;
        else
            return Color.red;
    }

    private Color GetTotalScoreColorCode(float score)
    {
        if (score >= 85)
            return Color.green;
        else if (score >= 71 && score < 85)
            return Color.yellow;
        else if (score >= 61 && score < 71)
            return orange;
        else
            return Color.red;
    }

    private int ColorScore(Color color)
    {
        if(color == Color.red)
        {
            return 0; 
        }else if(color == orange)
        {
            return 1;
        }else if(color == Color.yellow)
        {
            return 2;
        }else if(color == Color.green)
        {
            return 3;
        }
        else
        {
            return 0; 
        }
    }

    float totalScore = 0f;

    private void GetTotoalScore()
    {
        totalScore = (ColorScore(fpsLight.color) + ColorScore(memoryLight.color) + ColorScore(freqLight.color) + ColorScore(batteryLight.color) + ColorScore(sizeLight.color) + ColorScore(loadingLight.color)) / 18f;
        totalScore *= 100f;
    }

    public void OnLoadTimeChange()
    {
        loadingLight.color = GetLoadTimeColorCode(int.Parse(loadingField.text));
    }

    private Color GetSizeColorCode(float mb)
    {
        if (mb < 100f)
            return Color.green;
        else if (mb >= 100f && mb < 120f)
            return Color.yellow;
        else if (mb >= 120f && mb < 150f)
            return orange;
        else
            return Color.red;
    }

    public void OnBundleSizeChange()
    {
        sizeLight.color = GetSizeColorCode(float.Parse(sizeField.text));
    }

    public void Reset()
    {
        skippedTime = 0f;

        fpsField.text = 0.ToString();
        fps_start = Time.realtimeSinceStartup;
        fps_timer = 0f;
        fps_addUpFrame = 0f;
        fps_frames = 0f;

        currentAllocatedGC = 0;
        lastAllocatedGC = 0;

        gcAllocTotal = 0;

        gcQuantity = 0f;

        gcFreq = 0f;

        gcTimesTotal = 0;

        batteryStart = SystemInfo.batteryLevel;
        currentBattery = 0f;
        batteryRate = 0f;

        StopAllCoroutines();
        StartCoroutine(CalculateFPS());
        StartCoroutine(UpdateMemory());
        StartCoroutine(UpdateBattery());
    }
    //doing FPS  
    float fps_timer = 0f;
    float fps_start = 0f;
    float fps_addUpFrame = 0f;
    float fps_frames = 0f;
    float fps_avgFPS = 0;

    IEnumerator CalculateFPS()
    {
        while (fps_timer < 1)
        {
            fps_timer += Time.deltaTime / 5f;
            fps_addUpFrame = Time.realtimeSinceStartup - fps_start;
            fps_frames++;

            //test code
            //string enemyString = "There are " + "tons" + " tons" + " enemies left." + " fuck" + " fuck!";
            //Debug.Log(enemyString);

            if (fps_timer >= 1f)
            {
                fps_timer = 0f;
                fps_avgFPS = Mathf.Round((fps_frames - 1f) / fps_addUpFrame);
                fps_frames = 0f;
                fps_addUpFrame = 0f;
                fps_start = Time.realtimeSinceStartup;
                fpsLight.color = GetFPSColorCode(fps_avgFPS);
                fpsField.text = fps_avgFPS.ToString();
            }
            yield return null;
        }
    }

    long currentAllocatedGC = 0;
    long lastAllocatedGC = 0;

    long gcAllocTotal = 0;

    float gcQuantity = 0f;
    float gcTimesTotal = 0f;
    float gcFreq = 0f;

    IEnumerator UpdateMemory()
    {
        yield return WaitforSec;
        while (true)
        {
            if (!pause)
            {
                currentAllocatedGC = System.GC.GetTotalMemory(false);
                if (currentAllocatedGC < lastAllocatedGC)
                {
                    gcAllocTotal += (lastAllocatedGC - currentAllocatedGC);
                    gcTimesTotal += 1f;
                }
                yield return null;
                lastAllocatedGC = currentAllocatedGC;
            }
            else
            {
                yield return null;
            }
        }
    }

    float batteryStart = 0f;
    float currentBattery = 0f;
    float batteryRate = 0f;
    WaitForSeconds WaitforSec = new WaitForSeconds(1f);

    IEnumerator UpdateBattery()
    {
        if (batteryStart < 0)
        {
            batteryField.text = "not supported";
            batteryLight.color = Color.red;
            yield break;
        }

        yield return WaitforSec;

        while (true)
        {
            currentBattery = SystemInfo.batteryLevel;
            batteryRate = (batteryStart - currentBattery) / Time.time;
            batteryField.text = (batteryRate * 600f).ToString();
            batteryLight.color = GetBatteryColorCode(batteryRate * 60f);
            yield return WaitforSec;
            if (!pause)
            {
                gcQuantity = gcAllocTotal / (Time.time - skippedTime);
                gcFreq = gcTimesTotal / (Time.time - skippedTime);
                memoryField.text = Mathf.Round(gcQuantity * 60f / 1048576f).ToString();
                memoryLight.color = GetMemoryColorCode(gcQuantity * 60f / 1048576f);
                freqField.text = (gcFreq * 60f).ToString();
                freqLight.color = GetFreqColorCode(gcFreq * 60f);
                GetTotoalScore();
                totalField.text = totalScore.ToString();
                totalLight.color = GetTotalScoreColorCode(totalScore);
            }
        }
    }
}
