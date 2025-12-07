using UnityEngine;

public class CarSpawerScript : MonoBehaviour
{
    float timer;
    int r;
    [SerializeField] GameObject car;
    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= 0.5)
        {
            timer = 0;
            r= Random.Range(0, 2);


            switch (r)
            {
                case 0:
                   Instantiate(car,new Vector3(10,0,0),Quaternion.Euler(0,0,90));
                   break;
                case 1:
                   Instantiate(car, new Vector3(0, 10, 0), Quaternion.Euler(0, 0, 180));
                   break;
            }
        }

    }
}
