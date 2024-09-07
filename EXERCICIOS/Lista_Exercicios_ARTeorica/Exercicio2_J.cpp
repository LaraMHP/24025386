//2-J
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    int a, b, c, d, total;

    printf("\nInforme a quantidade de moedas de 1 real que possui: ");
    scanf("%d", &a);

    printf("\nInforme a quantidade de notas de 10 reias que possui: ");
    scanf("%d", &b);

    printf("\nInforme a quantidade de notas de 50 reais que possui: ");
    scanf("%d", &c);

    printf("\nInforme a quantidade de notas de 100 reais que possui: ");
    scanf("%d", &d);

    //Equação
    total = (1 * a) + (10 * b) + (50 * c) + (100 * d);
    printf("\nO valor total é: %d\n", total);
}
