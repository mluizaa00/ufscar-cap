//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     16/09/24
// Data de Modificação: 16/09/24
//
// Objetivo: An unlucky number is one that contains a 1 followed by a 
// 3 among its digits. For example, the number 341329 is an unlucky number, 
// while the number 26771 is not.
// Given an integer N, your program will have to determine if N is unlucky or not.
//

#include <stdio.h>

int main()
{
    // Inicializar valores
    int numero = 0;
    scanf("%d", &numero);

    // Transforma o número em string
    char result[100] = {0};
    sprintf(result, "%d", numero);

    // Através de um método contains, verifica se o número 13 está no número original
    if (strstr(result, "13")) {
        printf("%s es de Mala Suerte\n", result);
    } else {
        printf("%s NO es de Mala Suerte\n", result);
    }

    return 0;
}