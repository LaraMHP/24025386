//Exerc�cio 2-4
#include <stdio.h>
#include<locale>

int main()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    float bateria;
    do{
        printf("\nInforme o n�vel de bateria do rob�: ");
        scanf("%f", &bateria);

        if (bateria < 20)
        {
            printf("\nAten��o! A bateria est� baixa! N�vel atual: %.2f%%\n", bateria);
            printf("Recarregue a bateria.\n");
        }
        else
        {
            printf("\nBateria boa! N�vel atual: %.2f%%\n", bateria);
        }
    }while(bateria <= 20);
}
