//2-A
#include <stdio.h>
#include<locale>

int main ()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    int x, y, z, c;
    printf ("\nEscolha o primeiro n�mero: ");
    scanf("%i", &x);

    printf ("\nEscolha o segundo n�mero: ");
    scanf("%i", &y);

    printf ("\nEscolha o terceiro n�mero: ");
    scanf("%i", &z);

    c = (z * 100) + (y * 10) +x;

    printf("\nResultado: %i", c);
    scanf ("%i", &c);
}
