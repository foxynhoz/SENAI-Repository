#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

void funcao(int jogador);
void exibir_forca(int erros);
void victor(int vito, int dero);


int main()
{
    int vitoria = 0, derrota = 0;
    while (1) //
    {
        bool gotOne;
        char palavra[] = "palavra";
        char resposta[strlen(palavra)];
        char usrPalpite;
        int tentativas = 6;
        //

        //


        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for(int i = 0; i < strlen(palavra); i++)
        {
            resposta[i] = '_';
        }
        while(1)
        {
            gotOne = false;
            printf("\n\nDigite um letra Tentativas: %d:\n",tentativas);
            printf("%s \n", resposta);
            scanf(" %c", &usrPalpite);
            usrPalpite = tolower(usrPalpite);

            for(int i = 0; i < strlen(palavra); i++)
            {
                if(usrPalpite == palavra[i])
                {
                    gotOne = true;
                    resposta[i] = palavra[i];
                }
            }

            if(gotOne == false)
            {
                tentativas--;
            }
            exibir_forca(tentativas);
            //Se for vitoria
            if(strcmp(resposta, palavra) == 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("\n\nParabens! Voce venceu!\n");
                vitoria++;
                victor(vitoria, derrota);
                break;
            }
            //Se for derrota

            if(tentativas == 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
                printf("\n\n\nGAME OVER.\n\n\n");
                derrota++;
                victor(vitoria, derrota);
                break;
            }
            funcao(vitoria);

        }
    }
    getchar();
    return 0;

}

void victor(int vito, int dero)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN );
    printf("Vitorias: %d    ", vito);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
    printf("Derrotas: %d", dero);
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY );
}

void exibir_forca(int erros)
{

    switch (erros)
    {
    case 6:
        printf("\n------\n|\n|\n|\n|\n---\n");
        break;
    case 5:
        printf("\n------\n|     |\n|     O\n|\n|\n---\n");
        break;
    case 4:
        printf("\n------\n|     |\n|     O\n|     |\n|\n---\n");
        break;
    case 3:
        printf("\n------\n|     |\n|     O\n|    /|\n|\n---\n");
        break;
    case 2:
        printf("\n------\n|     |\n|     O\n|    /|\\\n|\n---\n");
        break;
    case 1:
        printf("\n------\n|     |\n|     O\n|    /|\\\n|    /\n---\n");
        break;
    case 0:
        printf("\n------\n|     |\n|     O\n|    /|\\\n|    / \\\n---\n");
        break;
    default:
        printf("\n------\n|     |\n|     O\n|    /|\\\n|    / \\\n|   GAME OVER\n---\n");
        break;
    }
}

void funcao (int jogador)
{
    if (jogador >= 5 && jogador <10)
    {
        printf ("Voce ganhou BRONZE");
    }

    else if (jogador >= 10 && jogador <15)
    {
        printf ("Voce ganhou PRATA");
    }
    else if (jogador >= 15 && jogador <20)

    {
        printf ("Voce ganhou OURO");
    }

    else if (jogador >= 20)

    {
        printf ("Voce ganhou PLATINA");
    }

}

