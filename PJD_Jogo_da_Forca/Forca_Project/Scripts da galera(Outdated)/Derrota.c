
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
void derrota();

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    bool gotOne;
    char palavra[] = "palavra";
    char resposta[strlen(palavra)];
    char usrPalpite;
    int tentativas = 6;
    derrota();

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
        if(tentativas == 0)
        {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
           derrota();
            break;
        }
    }
    return 0;
}
void derrota(){
int tentativas;
if(tentativas == 0)
        {
            printf("\n\n\nGAME OVER.\n\n\n");
        }
}
