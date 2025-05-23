#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    bool gotOne;
    char palavra[] = "palavra";
    char resposta[strlen(palavra)];
    char usrPalpite;
    int tentativas = 6;

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
        if(strcmp(resposta, palavra) == 0)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("\n\nParabens! Voce venceu!\n");
            break;
        }

        if(tentativas == 0)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
            printf("\n\n\nGAME OVER.\n\n\n");
            break;
        }
    }
    return 0;
}
