//Exercício 1-3
# include <stdio.h>
#include <math.h>
#include <time.h>
#include <locale>

// referencia: https://www.geeksforgeeks.org/time-delay-c/
void delay(int seconds)
{
    clock_t startTime = (clock() / CLOCKS_PER_SEC);
    clock_t finalTime = startTime + seconds;

    while (startTime <= finalTime) {
        startTime = (clock() / CLOCKS_PER_SEC);
    }
}

int main ()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");
    int passos;
    int soma = 0;

    do {
        printf("\nInforme a quantidade de passos dados: ");
        scanf("%d", &passos);

        soma += passos;

        if (soma == 10000)
        {
            printf("\nPARABÉNS!Você  atingiu a meta diária de 10.000 passos!\n");
        }
        delay(1);
    }while(soma < 10000);
}
