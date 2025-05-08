#include <stdio.h>

void funcao (int jogador);
int main()
{
    int i;

    printf ("Digite um numero:"); //teste
    scanf ("%d" , &i); //teste

    funcao (i);

    return 0;
}

void funcao (int jogador)
{


    if (jogador <=4)
    {
       printf ("Voce ganhou BRONZE");
    }

    else if (jogador <=5)
    {
        printf ("Voce ganhou PRATA");
    }
    else if (jogador <=10)

    {
        printf ("Voce ganhou OURO");
    }

    else if (jogador <=15)

    {
        printf ("Voce ganhou PLATINA");
    }

}







