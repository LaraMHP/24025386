//Exerc�cio 2-2
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    float distancia;
    int i = 0;
    char comando;
    printf("\nDigite a dist�ncia medida pelo sensor (em cm): ");
    scanf("%f", &distancia);

    do {
        // Exibe a dist�ncia medida
        printf("Dist�ncia medida: %.2f cm\n", distancia);

        if (distancia < 10) {
            printf("\nDist�ncia menor que 10 cm registrada! O programa est� encerrando...\n");
            break;
        }
        distancia -=1;

        printf("\nDeseja continuar a leitura? (Digite 's' para sim ou 'n' para n�o): ");
        scanf(" %c", &comando);

    } while (comando == 's' || comando == 'S');
}
  /*  do {
        printf("\nDigite a dist�ncia medida pelo sensor (em cm): ");
        scanf("%f", &distancia);

        while(distancia >= 10)
        {
            printf("Dist�ncia medida: %.2f cm\n", distancia);
            distancia -= 1;
        }
        if (distancia < 10) {
            printf("\nDist�ncia menor que 10 cm registrada!\n");
        }

        printf("\nDeseja continuar a leitura? (Digite 's' para sim ou 'n' para n�o): ");
        scanf(" %c", &comando);

    } while (comando == 's' || comando == 'S');
    return 0;
}*/
