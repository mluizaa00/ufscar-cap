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
    double quantidadeTotal = 0;
    double valorDePrecoTotal = 0;

    int deveContinuarInput = 1;
    do {
        // Acessar quantidade e preco do dvd
        printf("Digite o preco e a quantidade do produto:");

        int quantidade;
        double preco;
        scanf("%lf", &preco);
        scanf("%d", &quantidade);
        
        // Verificacao, caso ambos sejam 0, acabou o input
        if (quantidade == 0 && preco == 0) {
            deveContinuarInput = 0;
        }
        
        // Soma os valores para o calculo
        quantidadeTotal += quantidade;
        valorDePrecoTotal += preco * quantidade;
    } while (deveContinuarInput == 1);

    // Calculo do valor medio
    double valorMedio = valorDePrecoTotal / quantidadeTotal;

    // Exibir valores finais
    printf("Valor medio: %lf", valorMedio);
    printf("Valor total: %lf", valorDePrecoTotal);
}