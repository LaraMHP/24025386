//2-G
#include<stdio.h>
#include<math.h>
#include<locale>

int main ()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float P, V, T, M;

    printf("\nInforme a press�o do pneu: ");
    scanf("%f", &P);

    printf("\nInforme o volume do pneu: ");
    scanf("%f", &V);

    printf("\nInforme a temperatura do pneu: ");
    scanf("%f", &T);

    //Equa��o
    M = (P * V) / (0.37 * (T + 460));

    printf("\nA massa de ar (M) desse pneu �: %.3f", M);
}
