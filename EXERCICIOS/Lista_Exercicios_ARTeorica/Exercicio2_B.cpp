//2-B
#include<stdio.h>
#include<locale>

int main()
{
    //Lingua portuguesa
    setlocale(LC_ALL, "portuguese");

    char nome[20];
    printf ("\nOl� eu sou o N� 1, como � seu nome? ");
    scanf ("%s",&nome);
    printf ("\nBem-vindo ao clube, %s\n", nome);
}
