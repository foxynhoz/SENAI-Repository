#include <stdio.h>
#include <stdlib.h>

//Declarem suas funçoes abaixo

void idosa ( int anoAtual , int anoNascimento);

int main()
{
    int anoNascimento;
    int anoAtual;

    printf("Digite o ano de nascimento: ");
    scanf("%d",&anoNascimento);

    printf("Digite o ano de atual: ");
    scanf("%d",&anoAtual);

   idosa (anoAtual ,anoNascimento);

    return 0;
}

void idosa ( int anoAtual , int anoNascimento) {

    int idade;
    idade = anoAtual - anoNascimento;

    if (idade > 51)

    printf ("Voce eh idoso");

}





