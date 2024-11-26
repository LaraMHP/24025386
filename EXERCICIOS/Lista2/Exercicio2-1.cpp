//Exerc�cio 2-1
# include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale>

int main ()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    char comandoMovimento;
    char comando[4];
    int x=0;
    int y=0;
    //Menu
    printf("\nDigite uma das seguintes teclas para movimentar o seu rob�, considere que cada movimento � equivalente a 1m\n\n");
    printf("\t 'W' \t move para frente\n");
    printf("\t 'S' \t move para tr�s\n");
    printf("\t 'A' \t move para esquerda\n");
    printf("\t 'D' \t move para direita\n");
    printf("\nDigite 'sair' para fechar o programa\n");

    //Estrura de condi��o
    do{
        comando[0] = '\0';
        printf("\nPosi��o atual do rob�: (%d, %d)\n", x, y);
        printf("\nAperte um bot�o para mover o rob�: ");
        scanf("%s", &comando);
        if (strcmp(comando, "sair") == 0)
        {
            printf("\nFechando o programa\n");
            break;
        }
        comandoMovimento = comando[0];
        switch(comandoMovimento){
            case 'W':
                if (y < 9)
                {
                    y++;
                    printf("\nMovendo-se para frente\n");
                }
                else
                {
                    printf("\nN�o tem como continuar indo para frente\n");
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
                }
            break;

            case 'D':
                if (x < 9)
                {
                    x++;
                    printf("\nMovendo-se para direita\n");
                }
                else
                {
                    printf("\nN�o tem como continuar indo para direita\n");
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
                }
            break;
            default:
                printf("\nDigite um tecla v�lida\n");
        }
    }while(1);

    return 0;
}
