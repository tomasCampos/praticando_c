#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

#define true 0
#define false 1

int verificarSeNumeroEPrimo(int numero) {
    
    int contador;
    int ePrimo = true;

    if (numero == 0 || numero == 1)
        ePrimo = 1;

    for (contador = 2; contador <= numero / 2; ++contador) {

        if (numero % contador == 0) {
            ePrimo = 1;
            break;
        }
    }

    return ePrimo;
}

void mostrarConteudoDeArquivo(char caminhoArquivo[]) {
    
    int caractereQueSeraEscrito;
    FILE *arquivo;
    if ((arquivo = fopen(caminhoArquivo, "r")) == NULL) {
        printf("Erro! Arquivo nao pode ser aberto");        
        exit(1);
    }

    do {
        caractereQueSeraEscrito = getc(arquivo);
        putchar(caractereQueSeraEscrito);
    }
    while(caractereQueSeraEscrito != EOF);

    fclose(arquivo);
}

int obterTamanhoDeString(char string[])
{
    int i;
    for (i = 0; string[i] != '\0'; ++i);
    
    return i;
}