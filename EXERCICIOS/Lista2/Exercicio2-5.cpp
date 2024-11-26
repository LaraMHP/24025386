//Exercício 2-5
# include <stdio.h>
#include <math.h>
#include <locale>

int main ()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");
    char comando, Q;
    int x=0;
    int y=0;
    //Menu
    printf("\nDigite uma das seguintes teclas para movimentar o seu robô, considere que cada movimento é equivalente a 1m\n\n");
    printf("\t 'W' \t move para frente\n");
    printf("\t 'S' \t move para trás\n");
    printf("\t 'A' \t move para esquerda\n");
    printf("\t 'D' \t move para direita\n");
    printf("\nDigite 'Q' para fechar o programa\n");

    //Estrura de condição
    do{
        printf("\nPosição atual do robô: (%d, %d)\n", x, y);
        printf("\nAperte um botão para mover o robô: ");
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
                    printf("\nNão tem como continuar indo para frente\n");
                    return 0;
                }
            break;

            case 'S':
                if (y > 0)
                {
                    y--;
                    printf("\nMovendo-se para trás\n");
                }
                else
                {
                    printf("\nNão tem como continuar indo para trás\n");
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
                    printf("\nNão tem como continuar indo para direita\n");
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
                    printf("\nNão tem como continuar indo para esquerda\n");
                    return 0;
                }
            break;

            case 'Q':
                printf("\nSaindo do programa\n");
                break;

            default:
                printf("\nDigite um tecla válida\n");
        }
    }while(comando!='Q');

    return 0;
}
