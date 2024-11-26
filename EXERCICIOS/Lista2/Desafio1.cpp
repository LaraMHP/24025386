//1-Desafio: An�lise de Desempenho de A��es
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    int dias;
    float preco,desempenho;
    float media,somatoria,desvio_padrao;
    float soma = 0;

    printf("\nInforme a quantidade de dias a serem analisados: ");
    scanf("%d", &dias);

    float precos[dias];

    for (int i = 0; i < dias; i ++)
    {
        printf("\Informe o pre�o da a��o no dia %d: ", i + 1);
        scanf("%f", &preco);
        precos[i] = preco;
        soma += preco;
    }

     media = soma / dias;
 //Desvio padr�o

     for(int i =0; i< dias; i ++)
     {
         somatoria += pow(precos[i]-media,2);
     }
    //Calculo do desvio padr�o
    desvio_padrao = sqrt(somatoria/dias);

    //Desempenho
    desempenho = (desvio_padrao/media)*100;
    if(desempenho < 5)
    {
        printf("A a��o � est�vel");
    }
    else
    {
        printf("\nA a��o � vol�til");
    }
}
