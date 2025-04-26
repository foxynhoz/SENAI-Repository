#include <stdio.h>
#include <stdlib.h>

//Declarem suas funçoes abaixo

void bebe( int a, int b);

void soma(int anoAtual, int anoNacimento);

void idosa ( int anoAtual , int anoNascimento);

void calculo(int valor1, int valor2);

void adulto(int a, int b);


int main()
{
    int anoNascimento;
    int anoAtual;

    printf("Digite o ano de nascimento: ");
    scanf("%d",&anoNascimento);

    printf("Digite o ano de atual: ");
    scanf("%d",&anoAtual);


    bebe(anoAtual ,anoNascimento);
    calculo(anoNascimento,anoAtual);
    idosa (anoAtual ,anoNascimento);
    calculo(anoNascimento,anoAtual);
    soma(anoAtual,anoNascimento);
    adulto(anoAtual,anoNascimento);

    return 0;
}
//Funcao Lorrans

void bebe(int a, int b){
 a=a-b;
 if(a>=0 && a<=3){
 printf("Voce e um bebe. Sua idade e: %d", a);
 }

}

//Funçao WILL
void idosa ( int anoAtual , int anoNascimento) {

    int idade;
    idade = anoAtual - anoNascimento;

    if (idade > 51)

    printf ("Sua idade eh %d. Categoria idoso." , idade);

}



//Funçao GABRIEL
void calculo(int valor1, int valor2)
{
    int idade;
    idade = valor2 - valor1;

    if ( idade >= 11 && idade <= 18)
    {
        printf("Voce e um Adolescente\nSua Idade e: %d anos", idade);
    }


}
//Funcao bruno
void soma(int anoAtual, int anoNacimento)
{
    int resultado;

    resultado = anoAtual - anoNacimento;


    if (resultado >= 4 && resultado <= 10)
    {
        printf("sua idade e %d voce e uma crianca",resultado);

    }

}

//Funcao Chris

void adulto(int a, int b){
 a=a-b;
 if(a>=19 && a<50){
 printf("Voce e um adulto. Sua idade e: %d", a);
 }

}
