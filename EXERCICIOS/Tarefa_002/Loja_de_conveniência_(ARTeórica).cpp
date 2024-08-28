//LOJA DE CONVENIÊNCIA

//Importar bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale>

int menuPrincipal();

float operacaoCompras () {
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float valorTotalCompra = 0;
    char opcaoDeCompra[2];
    char nomeProduto[20];
    int quantidade = 0;
    float precoUnitario = 0;
    float valorTotal = 0;

    sprintf(opcaoDeCompra, "S");

    while (strcmp(opcaoDeCompra,"N") != 0) {
        nomeProduto[0] = '\0';
        quantidade = 0;
        precoUnitario = 0;
        valorTotal = 0;
        // extraído de https://unstop.com/blog/strings-in-c
        printf("\nInforme o nome do produto: ");
        scanf ("%s",&nomeProduto);

        printf("\nInforme a quantidade: ");
        scanf ("%i",&quantidade);

        printf("\nInforme o preço unitário: ");
        scanf ("%f",&precoUnitario);

        valorTotal = (quantidade * precoUnitario);
        printf("\nO valor total da compra é: %f\n", valorTotal);

        printf("\nDeseja adicionar outros produtos? [S]im / [N]ão ");
        scanf ("%s", &opcaoDeCompra);
        printf("\n%s", opcaoDeCompra);

        valorTotalCompra = valorTotalCompra + valorTotal;


        //valorTotalCompra = valorTotalCompra + valorTotal;
    }

    printf("\nValor total da compra: %.2f\n", valorTotalCompra);

    return valorTotalCompra;
}

int menuPrincipal()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    float finalDaCompra;
    float valorTotalDia;

    int opcaoMenuPrincipal = -1;

    while (opcaoMenuPrincipal != 3) {
        printf("\nInforme a operação deseajada: ");
        printf("\n");
        printf("\n1. Iniciar lista de compras");
        printf("\n2. Mostrar total do dia");
        printf("\n3. Sair do programa");
        printf("\nOpção: ");
        scanf ("%d",&opcaoMenuPrincipal);

        if (opcaoMenuPrincipal == 3) {
            return 0;
        }
        else if (opcaoMenuPrincipal == 1) {
            finalDaCompra = operacaoCompras();
            valorTotalDia = valorTotalDia + finalDaCompra;
        }
        else if (opcaoMenuPrincipal == 2) {
            printf ("\nValor Total do Dia: %.2f", valorTotalDia);
        }
        else {
            printf("\nDIGITE UMA OPÇÃO VÁLIDA. PRESSIONE QUALQUER TECLA PARA SEGUIR");
            scanf ("%d",&opcaoMenuPrincipal);
        }

    }
}

int main ()
{
    int opcao = -1;

     menuPrincipal();

}
