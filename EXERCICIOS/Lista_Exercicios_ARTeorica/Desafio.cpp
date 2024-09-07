//DESAFIO
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float DYa1, DYa2, DYa3, x, y, z;

    DYa1 = (17/24.13) * 100;
    DYa2 = (35/11) *100;
    DYa3 = (25/38.65) *100;

    printf("\nO DY da primeira ação é: %.2f", DYa1);
    printf("\nO DY da segunda ação é: %.2f", DYa2);
    printf("\nO DY da terceira ação é: %.2f", DYa3);

    //Primeira ação
    printf("\n\nQuanto deseja comprar da primeira ação? ");
    scanf("%f", &x);
    float total_1 = 24.13 * x;
    if(x > 41)
    {
        printf("\nNão há crédito o suficiente para esse investimento\n");
        return 0;
    }
    else
    {
        printf("\nA quantidade investida até o momento: %.2f\n", total_1);
    }

    //Segunda ação
    printf("\nQuanto deseja comprar da segunda ação? ");
    scanf("%f", &y);
    float total_2 = 11 * y;
    float compra_1e2 = total_1 + total_2;
    if (compra_1e2 > 1000)
    {
        printf("\nNão há crédito o suficiente para esse investimento\n");
        return 0;
    }
    else
    {
        printf("\nA quantidade investida até o momento: %.2f\n", compra_1e2);
    }

    //Terceira ação
    printf("\nQuanto deseja comprar da terceira ação? ");
    scanf("%f", &z);
    float total_3 = 38.65 * z;
    float compra_total = total_1 + total_2 +total_3;
    if (compra_total > 1000)
    {
        printf("\nNão há crédito o suficiente para esse investimento\n");
        return 0;
    }
    else
    {
        printf("\nA quantidade investida até o momento: %.2f\n", compra_total);
    }
}
