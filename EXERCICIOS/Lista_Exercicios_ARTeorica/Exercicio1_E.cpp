//2-A
#include <stdio.h>
#include<locale>

int main ()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    int x, y, z, c;
    printf ("\nEscolha o primeiro número: ");
    scanf("%i", &x);

    printf ("\nEscolha o segundo número: ");
    scanf("%i", &y);

    printf ("\nEscolha o terceiro número: ");
    scanf("%i", &z);

    c = (z * 100) + (y * 10) +x;

    printf("\nResultado: %i", c);
    scanf ("%i", &c);
}
