using Unity.VisualScripting;
using UnityEngine;

public class CarScript : MonoBehaviour
{
    float speed = 3f;
    public enum Carstates
    {
        isMoving,isStopped
    }
    public Carstates ActualState = Carstates.isMoving;

    void Update()
    {
        switch(ActualState)
        {
            case Carstates.isMoving:
                Move();
                break;
            case Carstates.isStopped:
                break;
        }
        
    }

    void Move()
    {
        transform.Translate(Vector3.up * speed * Time.deltaTime);
    }
    private void OnCollisionStay2D(Collision2D collision)
    {
        Semaforo_Script sem = collision.collider.GetComponent<Semaforo_Script>();

        if (collision.collider.tag == "Semaforo" && sem.SemaforoActualState == Semaforo_Script.states.isRed)
        {
            ActualState = Carstates.isStopped;
        }
        if (collision.collider.tag == "Semaforo" && sem.SemaforoActualState == Semaforo_Script.states.isGreen)
        {
            ActualState = Carstates.isMoving;
        }
    }
    
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.tag == "Car")
        {
            ActualState = Carstates.isStopped;
        }
    }
    
    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.collider.tag == "Car")
        {
            ActualState = Carstates.isMoving;
        }
    }
    
}

