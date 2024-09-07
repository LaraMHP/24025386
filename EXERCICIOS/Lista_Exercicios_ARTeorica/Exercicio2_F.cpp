//2-F
#include<stdio.h>
#include<math.h>
#include<locale>

int main ()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float F, C;
    printf("\nEntre com o valor da temperatura em Farenheit: ");
    scanf("%f", &F);

    //Equação
     C =(5*(F-32))/9;

     printf("\nA temperatura em  Centígrados é: %.2f\n", C);
}
