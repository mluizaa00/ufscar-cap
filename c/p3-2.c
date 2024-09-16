//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     16/09/24
// Data de Modificação: 16/09/24
//
// Objetivo: How many white squares and many black squares does an nxn-sized chessboard have?
//

#include <stdio.h>
#include <math.h>

int main()
{
    // Inicializar valores
    int n;
    scanf("%d", &n);

    // Cálculo
    int n2 = (n * n);
    int black = floor(n2 / 2);
    int white = n2 - floor(n2 / 2);

    // Retorno
    printf("%d casas brancas e %d casas pretas\n", white, black);
    return 0;
}