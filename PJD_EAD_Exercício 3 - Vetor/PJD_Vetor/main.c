#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;
   int digitos[5] = {0};

   printf("Digite um numero ae entre 0 e 99999: ");
   scanf("%d", &numero);

   if(numero < 0 || numero > 99999)
    {
        printf("Numero INVALIDO\n\n");
        main();
    }

    for(int i = 4; i >= 0 && numero > 0; i--)
    {
        digitos[i] = numero % 10;
        numero /= 10;
    }

    printf("Os numeros sao: {");

    for(int i = 0; i <5; i++)
    {
        printf("%d", digitos[i]);
        if(i < 4){
            printf(", ");
        }
    }
    printf("}");
}
