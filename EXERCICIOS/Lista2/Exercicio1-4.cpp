//Exerc�cio 1-4
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    float Deposito_inicial;
    float soma = 0;
    float valor_somado = 0;

    do{
        printf("\nInsira o valor do dep�sito inicial: ");
        scanf("%f", &Deposito_inicial);

        if(Deposito_inicial < 500)
        {
            printf("\nERRO! Dep�sito m�nimo � de 500 reais.\n");
        }
    }while(Deposito_inicial < 500);

    return 0;
}
