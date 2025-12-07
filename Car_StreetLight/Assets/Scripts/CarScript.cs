using Unity.VisualScripting;
using UnityEngine;

public class CarScript : MonoBehaviour
{
    float speed = 3f; //Tweak de velocidade do carro caso precise
    public enum Carstates
    {
        isMoving,isStopped
    }
    public Carstates ActualState = Carstates.isMoving; //Carro ja spawna indo reto

    void Update()
    {
        switch(ActualState) //Carro so tem um job nengue, andar ou nao, a questao eh quando
        {
            case Carstates.isMoving:
                Move();
                break;
            case Carstates.isStopped:
                break;
        }
        
    }

    void Move() //mlk so vai pra cima, ent o que determina a direçao dele eh pra onde o Y ta apontando
    {
        transform.Translate(Vector3.up * speed * Time.deltaTime);
    }
    private void OnCollisionStay2D(Collision2D collision)
    {
        Semaforo_Script sem = collision.collider.GetComponent<Semaforo_Script>(); //Tive que separar as colisoes em 'carro e semaforo' pa evitar situaçoes indesejadas no rpocesso

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
        if (collision.collider.tag == "Car")//Se bater ele freia e fica ali, so move em segunda instancia, quando o da frente começa a andar
        {
            ActualState = Carstates.isStopped;
        }
        if (collision.collider.name == "CarKiller")//Se bater ele EXPLODE
        {
            Destroy(gameObject);
        }
    }
    
    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.collider.tag == "Car") //Quando o da frente sair, ele começa a andar, se ele for o primeiro da fila, ele ja vai estar nesse estado por conta do semaforo
        {
            ActualState = Carstates.isMoving;
        }
    }
    
}

