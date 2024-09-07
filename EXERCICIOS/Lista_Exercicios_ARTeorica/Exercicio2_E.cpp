//2-E
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale>

int main ()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float altura, largura, area;
    double arredonda_pcima, latas;

    printf("\nInforme a altura da parede em metros(m): ");
    scanf("%f", &altura);

    printf("\nInforme a largura da parede em metros(m): ");
    scanf("%f", &largura);

    area = altura * largura;

    latas = 0.15 * area;

    arredonda_pcima = ceil(latas);

    printf("\nPara uma parede de %.2f m^2, a quantidade de latas de tinta de 2L necessária é: %.2lf", area, arredonda_pcima);
}
