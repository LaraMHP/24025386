//Exercício 1-2
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");
    float combustivel;

    do{
        printf("\nInforme o nível do comustível do carro (em porcentagem): ");
        scanf("%f", &combustivel);

        if(combustivel <= 15)
        {
            printf("\nALERTA! O tanque está abaixo de 15%, recarrege-o.\n");
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
