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

        //Listas de palavras
        const char* facil[] = {"agua","peixes","vida","bola","lima"};

        //palavra recebe a copia do que esta em um indice aleatorio em facil
        /*Aqui que um If else deve entrar, junto com um scanf e uma variavel de escolha de dificuldade
            EX:
            if dificuldade = 1
                const char* palavra; strcpy(palavra,facil[rand()%5])
            if dificuldade = 2
                const char* palavra; strcpy(palavra,medio[rand()%5])
            if dificuldade = 3
                const char* palavra; strcpy(palavra,dificil[rand()%5])

                use uma variavel int entre 1 e 3 pra que eu possa integrar no menu depois
        */
        const char* palavra; strcpy(palavra,facil[rand()%5]);

        //Resposta terá como quantidade de indices, a mesma quantidade de letras da palavra armazenada em palavra
        char resposta[strlen(palavra)];
        char usrPalpite;
        int tentativas = 6;

        for(int i = 0; i < strlen(palavra); i++)
        {
            resposta[i] = '_';
        }

        //isso determina que o ultimo index receberá \0 como caractere para simbolizar o fim da string
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
