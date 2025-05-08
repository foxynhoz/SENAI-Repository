#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>


void exibir_forca(int erros);


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

        exibir_forca(tentativas);

        if(tentativas == 0)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
            printf("\n\n\nGAME OVER.\n\n\n");
            break;
        }
    }
    return 0;
}



void exibir_forca(int erros) {

    switch (erros) {
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
