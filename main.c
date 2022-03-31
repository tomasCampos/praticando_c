#include <stdio.h>
#include "biblioteca.h"

#define true 0
#define false 1

int main()
{
    printf("\n teste metodo 1 ----------------- \n");

    int resposta1 = verificarSeNumeroEPrimo(97);
    if(resposta1 == true)
        printf("97 e primo");
    else
        printf("97 nao e primo");

    printf("\n teste metodo 2 ----------------- \n");

    mostrarConteudoDeArquivo(__FILE__);

    printf("\n teste metodo 3 ----------------- \n");

    int resposta2 = obterTamanhoDeString("Testando metodo");
    printf("tamanho da string e: %d", resposta2);

    return 0;
}