//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     14/08/24
// Data de Modificação: 14/08/24
//
// Objetivo: Leia os elementos de uma matriz de números reais 
// e calcule o maior valor
//

#include <stdio.h>

int main() {
    // Pegar dimensões iniciais
    printf("Qual a dimensão tem a matriz A?");
    int dimensaoA = 0;
    scanf("%d", &dimensaoA);

    // Consumir cada elemento de cada matriz
    int matrizA[dimensaoA][dimensaoA];
    for (int i = 0; i < dimensaoA; i++) {
        for (int j = 0; j < dimensaoA; i++) {
            printf("Qual o elemento da linha %d e da coluna %d da matriz A?", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Executar a multiplicação
    int maiorValor = 0;
    for (int i = 0; i < dimensaoA; i++) {
        for (int j = 0; j < dimensaoA; i++) {
            int elemento = matrizA[i][j];
            if (elemento > maiorValor) {
                maiorValor = elemento;
            }
        }
    }

    // Mostrar resultado
    printf("O maior valor é: %d", maiorValor);
}