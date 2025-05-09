#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
#include "functions.h"

int main()
{
    int vitoria = 0, derrota = 0;
    int i = 0;
    while (1) //
    {
        bool gotOne;
        char resposta[i];
        char usrPalpite;
        int tentativas = 6;
        //

        //


        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for(int i = 0; i < 50; i++)
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

            for(int i = 0; i < 50; i++)
            {
                if(usrPalpite == total[i])
                {
                    gotOne = true;
                    resposta[i] = total[i];
                }
            }

            if(gotOne == false)
            {
                tentativas--;
            }
            exibir_forca(tentativas);
            //Se for vitoria
            if(strcmp(resposta, total) == 0)
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
