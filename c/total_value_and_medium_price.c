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
    // Iniciar valores padrao de calculo
    double qtdTotal = 0;
    double valorTotal = 0;

    int continueLoop = 1;
    do {
        // Acessar quantidade e preco do dvd
        printf("Digite o preco e a quantidade do produto:");

        int quantidade;
        int preco;
        scanf("%lf", &quantidade);
        scanf("%d", &preco);
        
        // Verificacao, caso ambos sejam 0, acabou o input
        if (quantidade == 0 && preco == 0) {
            continueLoop = 0;
        }

        // Soma os valores para o calculo
        qtdTotal += quantidade;
        valorTotal += preco * quantidade;
    } while (continueLoop == 1);

    // Calculo do valor medio
    double valorMedio = valorTotal / qtdTotal;

    printf("Valor medio: %lf", valorMedio);
    printf("Valor total: %lf", valorTotal);
}