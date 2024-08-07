//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     07/08/24
// Data de Modificação: 07/08/24
//
// Objetivo: encontrar média geral e média da linha em uma matriz
//

#include <stdio.h>

int main() {
    // Valores de input
    int linhas = 2;
    int colunas = 2;
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // Valores iniciais
    int elementos_total = linhas * colunas;
    int soma_total = 0;

    // Somatória de cada elemento
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int element = matriz[i][j];
            soma_total += element;
        }
    }

    // Cálculo final
    double mediaGeral = soma_total / elementos_total;
    double mediaLinhas = soma_total / linhas;

    // Exibir valores finais
    printf("Media por elemento: %lf", mediaGeral);
    printf("Media por linha: %lf", mediaLinhas);
}