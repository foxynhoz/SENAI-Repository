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
