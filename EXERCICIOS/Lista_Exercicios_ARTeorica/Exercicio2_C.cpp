//2-C
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    char nome[20];
    int idade, dias;

    printf("\nInforme o seu nome: ");
    scanf("%s", &nome);

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("\n%s, você tem %d dias de vida.", nome, dias);
}
