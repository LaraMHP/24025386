//2-H
#include<stdio.h>
#include<math.h>
#include<locale>

int main ()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float a1, r, an;
    int N;

    printf("\nInforme o primeiro termo da PA: ");
    scanf("%f", &a1);

    printf("\nInforme a raz�o da PA: ");
    scanf("%f", &r);

    printf("\nInforme o n�mero do termo da PA: ");
    scanf("%d", &N);

    //Equa��o
    an = (a1 +( (N - 1) * r));
    printf("\nO N-�sino termo da PA �: %f", an);
}
