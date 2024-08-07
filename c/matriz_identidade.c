//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     07/08/24
// Data de Modificação: 07/08/24
//
// Objetivo: Leia os elementos de uma matriz de números reais 
// e depois verifique se a matriz é uma matriz identidade.
//

#include <stdio.h>

int main() {
    // Valores de input
    int linhas = 2;
    int colunas = 2;
    int matriz[2][2] = {{1, 0}, {0, 1}};

    int flag = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int element = matriz[i][j];
            if ((i == j && element != 1) || (i != j && element == 1)) {
                flag = 1;
                break;
            }
        }
    }

    // Exibir resultado
    if (flag == 1) {
        printf("é identidade");
    } else {
        printf("nao é identidade");
    }
}