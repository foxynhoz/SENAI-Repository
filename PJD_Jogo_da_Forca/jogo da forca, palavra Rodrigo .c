#include<stdio.h>
int main()
{
int pala = 7;
 int Testentativas = 6;

    char tam[7] = {'R','o','d','r','i','g','o'};
    int j= 0;
   char exib[pala];
    
    
    for (j = 0;j < pala; j++)
    {
    exib[j] = '_';
    }
    int tentativas = 0;
    int acerto = 0;
    char letra;
    //tentativa de marca a palavra 
    int correto[7] = {0};
    printf("jogo da forca\n");
    while(tentativas < Testentativas && acerto < pala)
    {
    printf("\n palavra: ");
    
    for ( j = 0; j < pala; j++){
    
    printf(" %c ",exib[j] );
    
    }
   printf("\nDigite uma letra: ");
        scanf(" %c", &letra);
        
         int achou = 0;
         
         for ( j = 0; j < pala; j++)
         {
         
          if (tam[j] == letra && correto[j] == 0)
          {
                exib[j] = letra;
                
                correto[j] = 1;
                acerto++;
                achou = 1;
          }
         }
         
         if (!achou) {
            tentativas++;
            printf("Letra incorreta Tentativas restantes: %d\n", Testentativas - tentativas);
            
    
    }
    else {
            printf("Você acertou uma letra.\n");
        }
    }
    if (acerto == pala) {
        printf("\nParabéns! Você ganhou A palavra era: ");
        
        for (j= 0; j < pala; j++) {
        
            printf("%c", tam[j]);
        }
        } else {
        printf("\nFim de jogo Você não conseguiu adivinhar a palavra.\n");
        printf("A palavra era: ");
        for (j= 0; j < pala; j++) {
            printf("%c", tam[j]);
        }
        printf("\n");
    }
    return 0;
}