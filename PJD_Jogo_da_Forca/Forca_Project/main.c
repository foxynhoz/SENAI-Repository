#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

char total[50];
char faceis[50] = "batata----";
char faceis1[50] = "doce-";
char faceis2[50] = "gato-";
char faceis3[50] = "pipoca-";
char faceis4[50] = "bonita-";
char medias[50] = "manfatas-";
char medias1[50] = "calabouco-";
char medias2[50] = "mandraque-";
char medias3[50] = "repousar-";
char medias4[50] = "undertale-";
char dificeis[50] = "ginecofobia-";
char dificeis1[50] = "escolionofobia-";
char dificeis2[50] = "hipopotomonstrosesquipedaliofobia-";
char dificeis3[50] = "pneumoultramicroscopicossilicovulcanoconiotico-";
char dificeis4[50] = "oftalmotorrinolaringologista-";

for (i = 0; i < 50, i++)
{
    if (faceis[i]= -)
    {
        break;
    }
    else
    {
        total[i] = faceis[i]
    }
}

int nivel(int usuario);


int main()
{
    while(1)
    {
        srand(time(NULL));
        int randomizar=rand()%4;

        int level;

        printf("jogo da forca\nescolha a dificuldade\n1_facil\n2_medio\n3_dificil\n\n");
        scanf("%d",&level);
        nivel(level);

    }

    return 0;
}

int nivel (int usuario)
{
    srand(time(NULL));
    int randomizar=rand()%4;


    if(usuario == 1)
    {
        if (randomizar == 0)
        {
            for (i = 0; i < 50, i++)
            {
                if (faceis[i]= -)
                {
                    break;
                }
                else
                {
                    total[i] = faceis[i]
                }
            }
        }
        if (randomizar == 1)
        {
            for (i = 0; i < 50, i++)
            {
                if (faceis1[i]= -)
                {
                    break;
                }
                else
                {
                    total[i] = faceis1[i]
                }
            }
        }
        if (randomizar == 2)
        {
            for (i = 0; i < 50, i++)
            {
                if (faceis2[i]= -)
                {
                    break;
                }
                else
                {
                    total[i] = faceis2[i]
                }
            }
        }
        if (randomizar == 3)
        {
            for (i = 0; i < 50, i++)
            {
                if (faceis3[i]= -)
                {
                    break;
                }
                else
                {
                    total[i] = faceis3[i]
                }
            }
        }
        else
        {
            for (i = 0; i < 50, i++)
            {
                if (faceis4[i]= -)
                {
                    break;
                }
                else
                {
                    total[i] = faceis4[i]
                }
            }
        }
    }
    else if (usuario == 2)
    {
        if (randomizar == 0)
        {
            char medias[] = "manfatas";
        }
        if (randomizar == 1)
        {
            char medias1[] = "calabouo";
        }
        if (randomizar == 2)
        {
            char medias2[] = "mandraque";
        }
        if (randomizar == 3)
        {
            char medias3[] = "repousar";
        }
        else
        {
            char medias4[] = "undertale";
        }
    }
    else if (usuario == 3)
    {
        if (randomizar == 0)
        {
            char dificeis[] = "ginecofobia";
        }
        if (randomizar == 1)
        {
            char dificeis1[] = "escolionofobia";
        }
        if (randomizar == 2)
        {
            for (i = 0; i < 50, i++)
            {
                if (faceis2[i]= -)
                {
                    break;
                }
                else
                {
                    total[i] = faceis2[i]
                }
            }

        }
        if (randomizar == 3)
        {
            char dificeis3[] = "pneumoultramicroscopicossilicovulcanoconiotico";
        }
        else
        {
            char dificeis4[] = "oftalmotorrinolaringologista";
        }
    }


    return 0 ;
}
