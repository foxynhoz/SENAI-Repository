#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
#include "functions.h"

int vitoria = 0, derrota = 0;

int main()
{
        menu();

        while (1)
        {
            srand(time(NULL));
            bool gotOne;

            //Listas de palavras
            const char* palavra = randomWord();
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

            //Loop de jogo
            while(1)
            {
                gotOne = false;
                exibir_forca(tentativas);
                printf("\n\nDigite um letra:\n");
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
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
                    printf("%s\n", palavra);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY );
                    victor(vitoria, derrota);
                    tentativas = 6;
                    printf("Reiniciando...");
                    Sleep(3000);
                    system("cls");
                    main();

                    continue;
                }
            }
        }
        getchar();
    return 0;
}
