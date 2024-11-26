//Exerccício 2-3
#include <stdio.h>
#include<locale>

int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");
    char comando;
    printf("\nDigite uma das seguintes teclas para determinar a ação do robô\n");
    printf("\t 'L' \t Trocar uma lâmpada\n");
    printf("\t 'S' \t Tocar um som\n");
    printf("\t 'B' \t Mover um braço\n");
    printf("\nDigite 'Q' para sair do programa\n");
    do{
        printf("\nInsira a ação que deseja que o robô realize: ");
        comando=getchar();
        getchar();
        switch(comando){
            case 'L':
                printf("\nTrocando uma lâmpada\n");
                break;
            case 'S':
                printf("\nTocando um som\n");
                break;
            case 'B':
                printf("\nMovendo um braço\n");
                break;
            case 'Q':
                printf("\nSaindo do programa\n");
                break;
            default:
                printf("\nDigite uma tecla válida\n");
                break;
        }
    }while(comando!='Q');
    return 0;
}
