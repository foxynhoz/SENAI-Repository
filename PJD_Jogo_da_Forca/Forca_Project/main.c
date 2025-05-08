#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    bool gotOne;
    char palavra[] = "daniel";
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
        printf("%s \n", resposta);
        printf("\n\nDigite um letra Tentativas: %d:\n",tentativas);
        scanf(" %c", &usrPalpite);
        for(int i = 0; i < strlen(palavra); i++)
        {
            if(usrPalpite == palavra[i])
            {
                gotOne = true;
                resposta[i] = palavra[i];
            }
        }
        if(gotOne == false){
            tentativas--;
        }
    }
return 0;
}
