//2.1 Desafio
#include <stdio.h>
#include <locale>

//Movimento
void controleMovimento()
{
    char comando, G;
    int x=0;
    int y=0;
    //Menu
    printf("\nDigite uma das seguintes teclas para movimentar o seu rob�, considere que cada movimento � equivalente a 1m\n\n");
    printf("\t 'W' \t move para frente\n");
    printf("\t 'S' \t move para tr�s\n");
    printf("\t 'A' \t move para esquerda\n");
    printf("\t 'D' \t move para direita\n");
    printf("\nDigite 'G' para fechar o programa\n");

    //Estrura de condi��o
    do{
        printf("\nPosi��o atual do rob�: (%d, %d)\n", x, y);
        printf("\nAperte um bot�o para mover o rob�: ");
        scanf("%c", &comando);
        switch(comando){
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

            case 'G':
                printf("\nSaindo do programa\n");
                break;

            default:
                printf("\nDigite um tecla v�lida\n");
        }
    }while(comando!='G');

}

//Leitura do sensor de dist�ncia
void leituraSensores()
{
    float distancia;
    char comando;
    printf("Leitura de Sensores de Dist�ncia\n");

    do {
        printf("\nDigite a dist�ncia medida pelo sensor (em cm): ");
        scanf("%f", &distancia);
        printf("Dist�ncia medida: %.2f cm\n", distancia);

        if (distancia < 10) {
            printf("Dist�ncia menor que 10 cm registrada. Encerrando leitura...\n");
            break;
        }

        printf("Deseja continuar a leitura? (s/n): ");
        scanf(" %c", &comando);
    } while (comando == 's' || comando == 'S');
}

//A��es
void controleAtuacao()
{
    char comando;
    printf("\nDigite uma das seguintes teclas para determinar a a��o do rob�\n");
    printf("\t 'L' \t Trocar uma l�mpada\n");
    printf("\t 'S' \t Tocar um som\n");
    printf("\t 'B' \t Mover um bra�o\n");
    printf("\nDigite '6' para sair do programa\n");
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
    }while(comando!='6');
}

//Bateria
void monitoramentoBateria()
{
     float bateria;
    do{
        printf("\nInforme o n�vel de bateria do rob�: ");
        scanf("%f", &bateria);

        if(bateria > 20)
        {
            printf("\nO rob� est� acima de 20 por cento de bateria");
        }
    }while(bateria <= 20);
}

void navegacaoAutonoma()
{
    char comando, Q;
    int x=0;
    int y=0;
    //Menu
    printf("\nDigite uma das seguintes teclas para movimentar o seu rob�, considere que cada movimento � equivalente a 1m\n\n");
    printf("\t 'W' \t move para frente\n");
    printf("\t 'S' \t move para tr�s\n");
    printf("\t 'A' \t move para esquerda\n");
    printf("\t 'D' \t move para direita\n");
    printf("\nDigite '6' para fechar o programa\n");

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
                if (x < 4)
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

            case '6':
                printf("\nSaindo do programa\n");
                break;

            default:
                printf("\nDigite um tecla v�lida\n");
        }
    }while(comando!='6');
}

//Menu principal
int main()
{
    //L�ngua portuguesa
    setlocale(LC_ALL, "portuguese");
    int opcao;
    do{
        printf("\nDigite o n�mero de uma das opcoes a seguir: \n");
        printf("1. Controle de Movimento\n");
        printf("2. Leitura de Sensores de Dist�ncia\n");
        printf("3. Controle de Atua��o\n");
        printf("4. Monitoramento de Bateria\n");
        printf("5. Navega��o Aut�noma\n");
        printf("6. Desligar o rob�\n\n");
        opcao=getchar();
        getchar();
        switch(opcao)
        {
        case '1':
            controleMovimento();
            break;
        case '2':
            leituraSensores();
            break;
        case '3':
            controleAtuacao();
            break;
        case '4':
            monitoramentoBateria();
            break;
        case '5':
            navegacaoAutonoma();
            break;
        case '6':
           return 0;
            break;
        default:
            printf("\nDigite uma op��o v�lida");
        }
    }while(opcao!=6);
}
