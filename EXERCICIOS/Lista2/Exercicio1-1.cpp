//Exercício 1-1
//Estou assumindo que o programa deve rodar continuamente, recebendo inputs de temperatura.

#include <stdio.h>
#include <time.h>
#include <string.h>
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

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");
    //Variíveis
    float T;
    char valor[20];
    //Programa
    do {
        valor[0] = '\0';
        printf("\nInforme a temperatura atual do ambiente (em graus Celsius) ou (q) para fechar: ");
        scanf("%s", valor);

        if (strcmp(valor, "q") == 0)
        {
            printf("\nFechando o programa...\n");
            break;
        }
        else {
            T = atof(valor);

            if((T<20) || (T>25))
            {
                printf("\nALERTA! Temperatura fora do intervalo seguro.\n");
            }
        }
        delay(1);

    } while (1);
}
