#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[] = "amongus";
    char resposta[strlen(palavra)];
    char usrPalpite;

    for(int i = 0; i < strlen(palavra); i++)
    {
        resposta[i] = '_';
    }


while(1)
    {
        printf("%s %c ", palavra, palavra[0]);
        printf("Digite um letra: ");
        scanf("%c", &usrPalpite);
        printf("\n");

        for(int i = 0; i < strlen(palavra); i++){
            printf("%c", resposta[i]);
            if(usrPalpite == palavra[i]){
                printf("%c ", palavra[i]);
                resposta[i] = usrPalpite;
            }
            else{
                printf("_ ");
            }

        }
        getchar();
        printf("\n");
    }
}
