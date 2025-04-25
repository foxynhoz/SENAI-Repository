#include <stdio.h>
#include <stdlib.h>

//Declarem suas funçoes abaixo

void calculo(int valor1, int valor2);

int main()
{
    int anoNascimento;
    int anoAtual;

    printf("Digite o ano de nascimento: ");
    scanf("%d",&anoNascimento);

    printf("Digite o ano de atual: ");
    scanf("%d",&anoAtual);

    calculo(anoNascimento,anoAtual);

    return 0;
}

void calculo(int valor1, int valor2)
{
    int idade;
    idade = valor2 - valor1;

    if ( idade >= 11 && idade <= 18)
    {
        printf("Voce e um Adolescente\nSua Idade e: %d anos", idade);
    }


}
