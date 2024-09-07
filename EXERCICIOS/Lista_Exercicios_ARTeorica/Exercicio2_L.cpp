//2-L
#include<stdio.h>
#include<math.h>
#include<locale>

int main()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float a, b, c, d, e, total;

    printf("\nInforme o valor total: ");
    scanf("%f", &total);
    if (total <=0)
    {
        return 0;
    }

    //Equações

    //100 reais
    e = total/100;
    float floor_100 = 0;
    if (e > 0)
    {
        printf("\nA quantidade de notas de 100 reais é: %.2f\n", floor(e));
        floor_100 = floor(e) * 100;
    }
    else
    {
        printf("\nNão há notas de 100 reais\n");
    }

    //50 reais
    d = (total - floor_100)/50;
    float floor_50 = 0;
    if (d > 0)
    {
        printf("\nA quantidade de notas de 50 é: %.2f\n", floor(d));
        floor_50 = floor(d) * 50;
    }
    else
    {
        printf("\nNão há notas de 50 reais\n");
    }

    //10 reais
    c = (total - (floor_100+ floor_50))/10;
    float floor_10 = 0;
    if (d > 0)
    {
        printf("\nA quantidade de notas de 10 é: %.2f\n", floor(c));
        floor_10 = floor (c) * 10;
    }
    else
    {
        printf("\nNão há notas de 10 reais\n");
    }

    //5 reais
    b = (total - (floor_100 + floor_50 + floor_10))/5;
    float floor_5 = 0;
    if (d > 0)
    {
        printf("\nA quantidade de notas de 5 é: %.2f\n", floor(b));
        floor_5 = floor(b) * 5;
    }
    else
    {
        printf("\nNão há notas de 5 reais\n");
    }

    //1 real
    a = total - (floor_100 + floor_50 + floor_10 + floor_5);
    if (d > 0)
    {
        printf("\nA quantidade de moedas de 1 real é: %.2f\n", floor(a));
    }
    else
    {
        printf("\nNão há moedas de 1 real\n");
    }
}
