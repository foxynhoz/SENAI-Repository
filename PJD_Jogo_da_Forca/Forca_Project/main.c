#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
#include "functions.h"

int main()
{
    menu();
    while (1)
    {
        srand(time(NULL));
        int vitoria = 0, derrota = 0;
        bool gotOne;
        const char* facil[] = {"agua","peixes","vida","bola","lima"};
        const char* palavra; strcpy(palavra,facil[rand()%5]);
        char resposta[strlen(palavra)];
        char usrPalpite;
        int tentativas = 6;

        for(int i = 0; i < strlen(palavra); i++)
        {
            resposta[i] = '_';
        }

        resposta[strlen(palavra)] = '\0';

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        while(1)
        {
            gotOne = false;
            exibir_forca(tentativas);
            printf("\n\nDigite um letra%d:\n",strcmp(resposta, palavra));
            printf("%s \n", resposta);
            scanf(" %c", &usrPalpite);
            usrPalpite = tolower(usrPalpite);

            //Check se usuario acertou pelo menos uma
            for(int i = 0; i < strlen(palavra); i++)
            {
                if(usrPalpite == palavra[i])
                {
                    gotOne = true;
                    resposta[i] = palavra[i];
                }
            }

            system("cls");

            //Se ele não acertar nenhuma
            if(gotOne == false)
            {
                tentativas--;
            }

            //Se for vitoria
            if(strcmp(resposta, palavra) >= 0)
            {
                vitoria++;
                VictoryText();
                victor(vitoria, derrota);
                tentativas = 6;
                continue;
            }

            //Se for derrota
            if(tentativas == 0)
            {
                derrota++;
                DefeatText();
                victor(vitoria, derrota);
                continue;
            }
        }
    }
    getchar();
    return 0;
}
