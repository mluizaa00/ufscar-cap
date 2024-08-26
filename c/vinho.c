//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     21/08/24
// Data de Modificação: 21/08/24
//
// Para uma lista de vinhos contendo para cada vinho o seu nome, o seu preço 
// (R$) e o seu tipo (indicado por um caractere, sendo T para vinho tinto, 
// B para vinho branco e R para vinho rosê), calcule e mostre os dados do vinho 
// mais caro (nome, preço e tipo). Assuma que não existem vinhos com preços 
// iguais. O fim dos dados de entrada é indicado pelo nome do vinho igual a 
// "FIM". A lista possui pelo menos 1 vinho.
//

#include <stdio.h>
#include <string.h>

// Estrutura para o objeto Vinho
typedef struct 
{
    char *nome;
    float preco;
    char tipo;
} Vinho;

int main() {
    // Inicializacao de variaveis
    Vinho vinhos[100];

    int stopLoop = 0;
    int numeroVinhos = 0;

    int maiorIndex = 0;
    int maiorPreco = 0;
    do {
        Vinho vinho;

        // Scan das propriedades do vinho
        printf("Digite o nome: ");
        scanf("%d", &vinho.nome);
        if (&vinho.nome == "FIM") {
            stopLoop = 1;
            break;
        }

        numeroVinhos += 1;

        printf("Digite o preco: ");
        scanf("%d", &vinho.preco);
        printf("Digite o tipo (T/B/R): ");
        scanf("%f", &vinho.tipo);

        vinhos[numeroVinhos - 1] = vinho;
        if (vinho.preco > maiorPreco) {
            maiorPreco = vinho.preco;
            maiorIndex = numeroVinhos - 1;
        }   
    } while (stopLoop == 0);

    Vinho maiorVinho = vinhos[maiorIndex];

    // Expor resultados
    printf("Nome do vinho mais caro: %c", maiorVinho.nome);
    printf("Preco do vinho mais caro: %f", maiorVinho.preco);
    printf("Tipo do vinho mais caro: %c", maiorVinho.tipo);
}