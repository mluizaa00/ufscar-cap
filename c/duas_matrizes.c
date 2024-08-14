//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     14/08/24
// Data de Modificação: 14/08/24
//
// Objetivo: Leia os elementos de uma matriz de números reais 
// e multiple os valores de uma linha e de uma coluna, calculando a soma total disso
//

#include <stdio.h>

int main() {
    // Pegar dimensões iniciais
    printf("Qual a dimensão tem a matriz A?");
    int dimensaoA = 0;
    scanf("%d", &dimensaoA);

    printf("Qual a dimensão tem a matriz B?");
    int dimensaoB = 0;
    scanf("%d", &dimensaoB);

    // Consumir cada elemento de cada matriz
    int matrizA[dimensaoA][dimensaoA];
    for (int i = 0; i < dimensaoA; i++) {
        for (int j = 0; j < dimensaoA; i++) {
            printf("Qual o elemento da linha %d e da coluna %d da matriz A?", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    int matrizB[dimensaoB][dimensaoB];
    for (int i = 0; i < dimensaoB; i++) {
        for (int j = 0; j < dimensaoB; i++) {
            printf("Qual o elemento da linha %d e da coluna %d da matriz B?", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Pegar a linha e a coluna que deve ser multiplicada
    int linhaA = 0;
    printf("Qual a linha de A que deve ser multiplicada?");
    scanf("%d", &linhaA);

    int colunaB = 0;
    printf("Qual a coluna de B que deve ser multiplicada?");
    scanf("%d", &colunaB);

    // Executar a multiplicação
    int somaTotal = 0;
    for (int i = 0; i < dimensaoA; i++) {
        int elementoA = matrizA[linhaA - 1][i];
        int elementoB = matrizB[i][colunaB - 1];

        int valor = elementoA * elementoB;
        somaTotal += valor;
    }

    // Mostrar resultado
    printf("A soma final é: %d", somaTotal);
}