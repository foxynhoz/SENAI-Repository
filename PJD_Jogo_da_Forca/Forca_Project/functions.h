
char total[50];
char faceis[50] = "batata-";
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

void nivel(int usuario);

//Funçao WILL - Conquistas
void funcao(int jogador)
{
    if (jogador >= 5 && jogador <10)
    {
        printf ("Voce ganhou BRONZE");
    }

    else if (jogador >= 10 && jogador <15)
    {
        printf ("Voce ganhou PRATA");
    }
    else if (jogador >= 15 && jogador <20)

    {
        printf ("Voce ganhou OURO");
    }

    else if (jogador >= 20)

    {
        printf ("Voce ganhou PLATINA");
    }

}

//Funçâo Lorrans - Bonequinho
void exibir_forca(int erros)
{
    switch (erros)
    {
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

//Função Davi - Vitoria/Derrota Counter
void victor(int vito, int dero)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN );
    printf("Vitorias: %d    ", vito);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
    printf("Derrotas: %d", dero);
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY );
}

void nivel (int usuario)
{
    srand(time(NULL));
    int randomizar=rand()%4;
    int i =0;

    if(usuario == 1)
    {
        if (randomizar == 0)
        {
            for (i = 0; i < 50 ; i++)
            {
                if (faceis[i]= '-')
                {
                    break;
                }
                else
                {
                    total[i] = faceis[i];
                }
            }
        }
        if (randomizar == 1)
        {
            for (i = 0; i < 50 ; i++)
            {
                if (faceis1[i]= '-')
                {
                    break;
                }
                else
                {
                    total[i] = faceis1[i];
                }
            }
        }
        if (randomizar == 2)
        {
            for (i = 0; i < 50 ; i++)
            {
                if (faceis2[i]= '-')
                {
                    break;
                }
                else
                {
                    total[i] = faceis2[i];
                }
            }
        }
        if (randomizar == 3)
        {
            for (i = 0; i < 50 ; i++)
            {
                if (faceis3[i]= '-')
                {
                    break;
                }
                else
                {
                    total[i] = faceis3[i];
                }
            }
        }
        else
        {
            for (i = 0; i < 50; i++)
            {
                if (faceis4[i]= '-')
                {
                    break;
                }
                else
                {
                    total[i] = faceis4[i];
                }
            }
        }
    }
    else if (usuario == 2)
    {
        if (randomizar == 0)
        {
            for (i = 0; i < 50; i++)
            {
                if (medias[i]== '-')
                {
                    break;
                }
                else
                {
                    total[i] = medias[i];
                }
            }
        }
        if (randomizar == 1)
        {
            for (i = 0; i < 50; i++)
            {
                if (medias1[i]== '-')
                {
                    break;
                }
                else
                {
                    total[i] = medias1[i];
                }
            }
        }
        if (randomizar == 2)
        {
            for (i = 0; i < 50; i++)
            {
                if (medias2[i]== '-')
                {
                    break;
                }
                else
                {
                    total[i] = medias2[i];
                }
            }
        }
        if (randomizar == 3)
        {
            for (i = 0; i < 50; i++)
            {
                if (medias3[i]= '-')
                {
                    break;
                }
                else
                {
                    total[i] = medias3[i];
                }
            }
        }
        else
        {
            for (i = 0; i < 50; i++)
            {
                if (medias4[i]=='-')
                {
                    break;
                }
                else
                {
                    total[i] = medias4[i];
                }
            }
        }
    }

    else if (usuario == 3)
    {
        if (randomizar == 0)
        {
            for (i = 0; i < 50; i++)
            {
                if (dificeis[i]== '-')
                {
                    break;
                }
                else
                {
                    total[i] = dificeis[i];
                }
            }
        }
        if (randomizar == 1)
        {
            for (i = 0; i < 50; i++)
            {
                if (dificeis1[i]=='-')
                {
                    break;
                }
                else
                {
                    total[i] = dificeis1[i];
                }
            }
        }
        if (randomizar == 2)
        {
            for (i = 0; i < 50; i++)
            {
                if (dificeis2[i]== '-')
                {
                    break;
                }
                else
                {
                    total[i] = dificeis2[i];
                }
            }

        }
        if (randomizar == 3)
        {
            for (i = 0; i < 50; i++)
            {
                if (dificeis3[i]== '-')
                {
                    break;
                }
                else
                {
                    total[i] = dificeis3[i];
                }
            }
        }
        else
        {
            for (i = 0; i < 50; i++)
            {
                if (dificeis4[i]== '-')
                {
                    break;
                }
                else
                {
                    total[i] = dificeis4[i];
                }
            }
        }
    }
}
