//2-D
#include<stdio.h>
#include<math.h>
#include<locale>

int main ()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    const double pi = 3.14159;
    float R;

    printf("\nInforme o valor do raio: ");
    scanf("%f", &R);

    float area = pi * pow(R,2);

    printf("\nA área do círculo é: %.3f", area);
}
