//Exerc�cio 1-2
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    float combustivel;

    do{
        printf("\nInforme o n�vel do comust�vel do carro (em porcentagem): ");
        scanf("%f", &combustivel);

        if(combustivel <= 15)
        {
            printf("\nALERTA! O tanque est� abaixo de 15%, recarrege-o.\n");
        }
        else if(combustivel > 100)
        {
            printf("\nERRO! O valor lido deve estar entre 0 e 100%.\n");
        }
        else if(combustivel == 100)
        {
            printf("\nTanque completo!\n");
        }
    }while (combustivel <= 100);
}
