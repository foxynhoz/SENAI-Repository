#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

void victor(int vito, int dero);

int main()
{
    //
    bool gotOne;
    char palavra[] = "palavra";
    char resposta[strlen(palavra)];
    char usrPalpite;
    int tentativas = 6;
    //
    int vitoria = 0, derrota = 0;
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
        //Se for vitoria

        //Se for derrota
        if(tentativas == 0)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
            printf("\n\n\nGAME OVER.\n\n\n");
            derrota++;
            victor(vitoria, derrota);
            break;
        }
    }
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
