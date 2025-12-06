using UnityEngine;

public class Semaforos_Manager : MonoBehaviour
{
    [SerializeField] GameObject Sem1;
    [SerializeField] GameObject Sem2;

    Semaforo_Script Sem1ActualState;
    Semaforo_Script Sem2ActualState;

    void Start()
    {
        //Sem2ActualState.actualState = Semaforo_Script.states.isGreen;
    }

    void Update()
    {
        
    }
}
