//Exercc�cio 2-3
#include <stdio.h>
#include<locale>

int main()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    char comando;
    printf("\nDigite uma das seguintes teclas para determinar a a��o do rob�\n");
    printf("\t 'L' \t Trocar uma l�mpada\n");
    printf("\t 'S' \t Tocar um som\n");
    printf("\t 'B' \t Mover um bra�o\n");
    printf("\nDigite 'Q' para sair do programa\n");
    do{
        printf("\nInsira a a��o que deseja que o rob� realize: ");
        comando=getchar();
        getchar();
        switch(comando){
            case 'L':
                printf("\nTrocando uma l�mpada\n");
                break;
            case 'S':
                printf("\nTocando um som\n");
                break;
            case 'B':
                printf("\nMovendo um bra�o\n");
                break;
            case 'Q':
                printf("\nSaindo do programa\n");
                break;
            default:
                printf("\nDigite uma tecla v�lida\n");
                break;
        }
    }while(comando!='Q');
    return 0;
}
