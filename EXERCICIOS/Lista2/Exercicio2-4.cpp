//Exercício 2-4
#include <stdio.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");
    float bateria;
    do{
        printf("\nInforme o nível de bateria do robô: ");
        scanf("%f", &bateria);

        if (bateria < 20)
        {
            printf("\nAtenção! A bateria está baixa! Nível atual: %.2f%%\n", bateria);
            printf("Recarregue a bateria.\n");
        }
        else
        {
            printf("\nBateria boa! Nível atual: %.2f%%\n", bateria);
        }
    }while(bateria <= 20);
}
