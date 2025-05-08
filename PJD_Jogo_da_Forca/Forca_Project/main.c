#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[] = "daniel";
    char resposta[strlen(palavra)];
    char usrPalpite;

     for(int i = 0; i < strlen(palavra); i++)
    {
        resposta[i] = '_';
    }
    while(1)
    {
        printf("%s \n", resposta);
        printf("\n\nDigite um letra:\n");
        scanf(" %c", &usrPalpite);
        for(int i = 0; i < strlen(palavra); i++)
        {
            if(usrPalpite == palavra[i])
            {
                resposta[i]=palavra[i];
            }

        }
    }
return 0;
}
