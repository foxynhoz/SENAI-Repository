#include <conio.h>
#include <windows.h>

//Funçoes BASE
void tryAgainMenu();
void clsTA();
//VITORIA
char* randomWord();
void diffMenu();
int difficulty = 0;

void VictoryText()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Parabens! Voce venceu!\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY );
}
//DERROTA
void DefeatText()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
    printf("\nGAME OVER.\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY );
    printf("\nA palavra era: ");
}

//Funçao WILL - Conquistas VITORIAS
void funcao(int jogador)
{
    if (jogador == 5)
    {
        printf("Voce ganhou uma conquista: BRONZE");
    }

    else if (jogador == 10)
    {
        printf ("Voce ganhou uma conquista:  PRATA");
    }
    else if (jogador == 15)

    {
        printf ("Voce ganhou uma conquista:  OURO");
    }

    else if (jogador == 20)
    {
        printf ("Voce ganhou uma conquista:  PLATINA");
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
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY );
    printf("\n");
    funcao(vito);
}
//Função Daniel - Menu
void menu()
{
    int cursorPos = 1;
    printf("JOGO DA FORCA\n\n");

    printf(">>INICIAR\n");
    printf("INSTRUCOES\n");
    printf("CREDITOS\n\n");

    while(1)
    {
        int choice;
        choice = getch();

        //Enter
        if(choice == 13 || choice == 32)
        {
            if(cursorPos == 1)
            {
                diffMenu();
                break;
            }
            if(cursorPos == 2)
            {

                while(1)
                {
                    system("cls");
                    printf("BEM VINDO AO JOGO DA FORCA\nAs regras são simples\n\nO Programa gerara aleatoriamente uma palavra\nVoce deve digitar 1 caractere por vez e tentar adivinhar a palavra final\n\n");
                    printf("\n------\n|     |\n|     O\n|    /|\\ << Este carinha eh voce :) \n|    / \\\n");
                    printf("\n\nVoce tem 6 tentativas antes de ser enforcado\nBoa Sorte\n\n>> Voltar");
                    choice = getch();

                    if(choice == 13 || choice == 32)
                    {
                        system("cls");
                        printf("JOGO DA FORCA\n\n");

                        printf("INICIAR\n");
                        printf(">>INSTRUCOES\n");
                        printf("CREDITOS\n\n");
                        break;
                    }
                }

            }
            if(cursorPos == 3)
            {
                while(1)
                {
                    system("cls");
                    printf(" PROGRAMADO POR:\n    Daniel F.\n    Chris\n    Bruno\n    Davi\n    Gabriel S.\n    Gustavo F.\n    Higor\n    Lorrans\n    Rodrigo\n    Will\n\n>>Voltar");
                    choice = getch();

                    if(choice == 13 || choice == 32)
                    {
                        system("cls");
                        printf("JOGO DA FORCA\n\n");

                        printf("INICIAR\n");
                        printf("INSTRUCOES\n");
                        printf(">>CREDITOS\n\n");
                        break;
                    }
                }
            }
        }
        //Baixo
        if(choice == 115)
        {
            if(cursorPos == 1)
            {
                system("cls");
                cursorPos = 2;
                printf("JOGO DA FORCA\n\n");

                printf("INICIAR\n");
                printf(">>INSTRUCOES\n");
                printf("CREDITOS\n\n");
                continue;
            }
            if(cursorPos == 2)
            {
                system("cls");
                cursorPos = 3;
                printf("JOGO DA FORCA\n\n");

                printf("INICIAR\n");
                printf("INSTRUCOES\n");
                printf(">>CREDITOS\n\n");
                continue;
            }
            if(cursorPos == 3)
            {
                system("cls");
                cursorPos = 1;
                printf("JOGO DA FORCA\n\n");

                printf(">>INICIAR\n");
                printf("INSTRUCOES\n");
                printf("CREDITOS\n\n");
                continue;
            }
        }
        //Cima
        if(choice == 119)
        {
            if(cursorPos == 1)
            {
                system("cls");
                cursorPos = 3;
                printf("JOGO DA FORCA\n\n");

                printf("INICIAR\n");
                printf("INSTRUCOES\n");
                printf(">>CREDITOS\n\n");
                continue;
            }
            if(cursorPos == 2)
            {
                system("cls");
                cursorPos = 1;
                printf("JOGO DA FORCA\n\n");

                printf(">>INICIAR\n");
                printf("INSTRUCOES\n");
                printf("CREDITOS\n\n");
                continue;
            }
            if(cursorPos == 3)
            {
                system("cls");
                cursorPos = 2;
                printf("JOGO DA FORCA\n\n");

                printf("INICIAR\n");
                printf(">>INSTRUCOES\n");
                printf("CREDITOS\n\n");
                continue;
            }
        }

    }
}

char* randomWord()
{
    if(difficulty == 1)
    {
        const char* facil[] = {"bola", "casa", "gato", "livro", "verde", "limão", "doce", "nuvem", "peixe", "risos"};

        return facil[rand()%10];
    }
    if(difficulty == 2)
    {
        const char* medio[] = {"janela", "domingo", "caderno", "barulho", "viagem", "mistura", "trabalho", "brincar", "amarelo", "cartaz"};
        return medio[rand()%10];
    }
    if(difficulty == 3)
    {
        const char* dificil[] = {"extraordinario", "inconstitucional", "responsabilidade", "inacreditável", "conhecimento", "revolucionario", "inteligência", "interessante", "desenterrando", "encantamento"};
        return dificil[rand()%10];
    }
}

void diffMenu()
{
    int cursorPos = 1;

    system("cls");
    printf("SELECIONE A DIFICULDADE\n\n");

    printf(">>FACIL\n");
    printf("MEDIO\n");
    printf("DIFICL\n\n");

    printf("VOLTAR\n\n");



    while(1)
    {
        int choice;
        choice = getch();

        if(choice == 13 || choice == 32)
        {
            if(cursorPos == 1)
            {
                system("cls");
                difficulty = 1;
                break;
            }
            if(cursorPos == 2)
            {
                system("cls");
                difficulty = 2;
                break;
            }
            if(cursorPos == 3)
            {
                system("cls");
                difficulty = 3;
                break;
            }
            if(cursorPos == 4)
            {
                system("cls");
                menu();
            }
        }
        if(choice == 115)
        {
            if(cursorPos == 1){
                system("cls");
                cursorPos = 2;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf("FACIL\n");
                printf(">>MEDIO\n");
                printf("DIFICIL\n\n");

                printf("VOLTAR\n\n");
                continue;
            }
            if(cursorPos == 2){
                system("cls");
                cursorPos = 3;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf("FACIL\n");
                printf("MEDIO\n");
                printf(">>DIFICIL\n\n");

                printf("VOLTAR\n\n");
                continue;
            }
            if(cursorPos == 3){
                system("cls");
                cursorPos = 4;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf("FACIL\n");
                printf("MEDIO\n");
                printf("DIFICIL\n\n");

                printf(">>VOLTAR\n\n");
                continue;
            }
            if(cursorPos == 4){
                system("cls");
                cursorPos = 1;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf(">>FACIL\n");
                printf("MEDIO\n");
                printf("DIFICIL\n\n");

                printf("VOLTAR\n\n");
                continue;
            }
        }
        if(choice == 119)
        {
            if(cursorPos == 1){
                system("cls");
                cursorPos = 4;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf("FACIL\n");
                printf("MEDIO\n");
                printf("DIFICIL\n\n");

                printf(">>VOLTAR\n\n");
                continue;
            }
            if(cursorPos == 2){
                system("cls");
                cursorPos = 1;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf(">>FACIL\n");
                printf("MEDIO\n");
                printf("DIFICIL\n\n");

                printf("VOLTAR\n\n");
                continue;
            }
            if(cursorPos == 3){
                system("cls");
                cursorPos = 2;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf("FACIL\n");
                printf(">>MEDIO\n");
                printf("DIFICIL\n\n");

                printf("VOLTAR\n\n");
                continue;
            }
            if(cursorPos == 4){
                system("cls");
                cursorPos = 3;
                printf("SELECIONE A DIFICULDADE\n\n");

                printf("FACIL\n");
                printf("MEDIO\n");
                printf(">>DIFICIL\n\n");

                printf("VOLTAR\n\n");
                continue;
            }
        }
    }
}


