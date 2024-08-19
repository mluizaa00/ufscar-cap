//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     19/08/24
// Data de Modificação: 19/08/24
//
// Objetivo: Your job in this problem is to read a number that is a line 
// of an array, an uppercase character, indicating the operation to be 
// performed and all elements of a bidimentional array M[12][12]. Then, 
// you have to calculate and print the sum or average of all elements within 
// the green area according to the case.
//

#include <stdio.h>

int main()
{
    // Valores iniciais pré-estabelecidos
    int dimensao = 12;
    double soma = 0.0;
    double matriz[dimensao][dimensao];

    // Capturar valores iniciais
    char T[2];
    int linha;

    scanf("%d", &linha);
    scanf("%s", &T);

    // Escanear o valor de cada elemento da matriz
    for (int x = 0; x < dimensao; x++)
    {
        for (int y = 0; y < dimensao; y++)
        {
            // Escanear elemento e guardar na matriz
            scanf("%lf", &matriz[x][y]);
            if (x == linha) {
                // Somatória dos valores da linha desejada
                soma += matriz[x][y];
            }
        }
    }

    // Cálculo do retorno
    if (T[0] == 'S')
        printf("%.1lf\n", soma);
    else
    {
        printf("%.1lf\n", soma / 12.0);
    }
    return 0;
}