//2-I
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float a, b, c, delta, x1, x2;

    printf("\nEntre com o coeficente a: ");
    scanf("%f", &a);

    if (a==0)
    {
        printf("\nNÃO É EQUAÇÃO DE GRAU 2");
        return 0;
    }

    printf("\nEntre com o coeficente b: ");
    scanf("%f", &b);

    printf("\nEntre com o coeficente c: ");
    scanf("%f", &c);

    //Processos
    delta = pow(b,2) - (4 * a * c);

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        printf("\nO sistema possui duas raízes reais: %.2f e %.2f\n", x1, x2);
    }
    else if (delta==0)
    {
        x1 = (-b + sqrt(delta))/(2 * a);
        printf("\nO sistema possui uma raíz real: %f\n", x1);
    }
    else
    {
        printf("\nNão possui raízes reais\n");
    }


}
