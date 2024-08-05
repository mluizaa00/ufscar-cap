//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     05/08/24
// Data de Modificação: 05/08/24
//
// Objetivo: Fornecidos uma lista de preços e quantidades sobre 
// mídias de DVD, calcule e mostre o valor total em estoque (R$) e o preço médio da unidade de DVD.
//

#include <stdio.h>

int main() {
    double qtdTotal = 0;
    double valorTotal = 0;

    int continueLoop = 1;
    do {
        printf("Digite o preco e a quantidade do produto:");

        int quantidade;
        int preco;
        scanf("%lf", &quantidade);
        scanf("%d", &preco);
        
        if (quantidade == 0 && preco == 0) {
            continueLoop = 0;
        }

        qtdTotal += quantidade;
        valorTotal += preco * quantidade;
    } while (continueLoop == 1);

    double valorMedio = valorTotal / qtdTotal;

    printf("Valor medio: %lf", valorMedio);
    printf("Valor total: %lf", valorTotal);
}