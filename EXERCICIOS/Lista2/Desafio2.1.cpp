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
    printf("\nDigite uma das seguintes teclas para movimentar o seu robô, considere que cada movimento é equivalente a 1m\n\n");
    printf("\t 'W' \t move para frente\n");
    printf("\t 'S' \t move para trás\n");
    printf("\t 'A' \t move para esquerda\n");
    printf("\t 'D' \t move para direita\n");
    printf("\nDigite 'G' para fechar o programa\n");

    //Estrura de condição
    do{
        printf("\nPosição atual do robô: (%d, %d)\n", x, y);
        printf("\nAperte um botão para mover o robô: ");
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
                    printf("\nNão tem como continuar indo para frente\n");
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
                    printf("\nNão tem como continuar indo para direita\n");
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
                }
            break;

            case 'G':
                printf("\nSaindo do programa\n");
                break;

            default:
                printf("\nDigite um tecla válida\n");
        }
    }while(comando!='G');

}

//Leitura do sensor de distância
void leituraSensores()
{
    float distancia;
    char comando;
    printf("Leitura de Sensores de Distância\n");

    do {
        printf("\nDigite a distância medida pelo sensor (em cm): ");
        scanf("%f", &distancia);
        printf("Distância medida: %.2f cm\n", distancia);

        if (distancia < 10) {
            printf("Distância menor que 10 cm registrada. Encerrando leitura...\n");
            break;
        }

        printf("Deseja continuar a leitura? (s/n): ");
        scanf(" %c", &comando);
    } while (comando == 's' || comando == 'S');
}

//Ações
void controleAtuacao()
{
    char comando;
    printf("\nDigite uma das seguintes teclas para determinar a ação do robô\n");
    printf("\t 'L' \t Trocar uma lâmpada\n");
    printf("\t 'S' \t Tocar um som\n");
    printf("\t 'B' \t Mover um braço\n");
    printf("\nDigite '6' para sair do programa\n");
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
    }while(comando!='6');
}

//Bateria
void monitoramentoBateria()
{
     float bateria;
    do{
        printf("\nInforme o nível de bateria do robô: ");
        scanf("%f", &bateria);

        if(bateria > 20)
        {
            printf("\nO robô está acima de 20 por cento de bateria");
        }
    }while(bateria <= 20);
}

void navegacaoAutonoma()
{
    char comando, Q;
    int x=0;
    int y=0;
    //Menu
    printf("\nDigite uma das seguintes teclas para movimentar o seu robô, considere que cada movimento é equivalente a 1m\n\n");
    printf("\t 'W' \t move para frente\n");
    printf("\t 'S' \t move para trás\n");
    printf("\t 'A' \t move para esquerda\n");
    printf("\t 'D' \t move para direita\n");
    printf("\nDigite '6' para fechar o programa\n");

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
                }
            break;

            case '6':
                printf("\nSaindo do programa\n");
                break;

            default:
                printf("\nDigite um tecla válida\n");
        }
    }while(comando!='6');
}

//Menu principal
int main()
{
    //Língua portuguesa
    setlocale(LC_ALL, "portuguese");
    int opcao;
    do{
        printf("\nDigite o número de uma das opcoes a seguir: \n");
        printf("1. Controle de Movimento\n");
        printf("2. Leitura de Sensores de Distância\n");
        printf("3. Controle de Atuação\n");
        printf("4. Monitoramento de Bateria\n");
        printf("5. Navegação Autônoma\n");
        printf("6. Desligar o robô\n\n");
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
            printf("\nDigite uma opção válida");
        }
    }while(opcao!=6);
}
