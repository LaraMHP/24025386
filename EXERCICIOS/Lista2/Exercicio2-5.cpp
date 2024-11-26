//Exerc�cio 2-5
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    char comando, Q;
    int x=0;
    int y=0;
    //Menu
    printf("\nDigite uma das seguintes teclas para movimentar o seu rob�, considere que cada movimento � equivalente a 1m\n\n");
    printf("\t 'W' \t move para frente\n");
    printf("\t 'S' \t move para tr�s\n");
    printf("\t 'A' \t move para esquerda\n");
    printf("\t 'D' \t move para direita\n");
    printf("\nDigite 'Q' para fechar o programa\n");

    //Estrura de condi��o
    do{
        printf("\nPosi��o atual do rob�: (%d, %d)\n", x, y);
        printf("\nAperte um bot�o para mover o rob�: ");
        comando=getchar();
        getchar();
        switch(comando){
            case 'W':
                if (y < 4)
                {
                    y++;
                    printf("\nMovendo-se para frente\n");
                }
                else
                {
                    printf("\nN�o tem como continuar indo para frente\n");
                    return 0;
                }
            break;

            case 'S':
                if (y > 0)
                {
                    y--;
                    printf("\nMovendo-se para tr�s\n");
                }
                else
                {
                    printf("\nN�o tem como continuar indo para tr�s\n");
                    return 0;
                }
            break;

            case 'D':
                if (x < 4)
                {
                    x++;
                    printf("\nMovendo-se para direita\n");
                }
                else
                {
                    printf("\nN�o tem como continuar indo para direita\n");
                    return 0;
                }
            break;

            case'A':
                if (x > 0)
                {
                    x--;
                    printf("\nMovendo-se para esquerda\n");
                }
                else
                {
                    printf("\nN�o tem como continuar indo para esquerda\n");
                    return 0;
                }
            break;

            case 'Q':
                printf("\nSaindo do programa\n");
                break;

            default:
                printf("\nDigite um tecla v�lida\n");
        }
    }while(comando!='Q');

    return 0;
}
