//1-Desafio: Análise de Desempenho de Ações
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //Língua portuguesa
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
        printf("\Informe o preço da ação no dia %d: ", i + 1);
        scanf("%f", &preco);
        precos[i] = preco;
        soma += preco;
    }

     media = soma / dias;
 //Desvio padrão

     for(int i =0; i< dias; i ++)
     {
         somatoria += pow(precos[i]-media,2);
     }
    //Calculo do desvio padrão
    desvio_padrao = sqrt(somatoria/dias);

    //Desempenho
    desempenho = (desvio_padrao/media)*100;
    if(desempenho < 5)
    {
        printf("A ação é estável");
    }
    else
    {
        printf("\nA ação é volátil");
    }
}
