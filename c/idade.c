//
// Autor: Maria Luiza Fernandes Prestes Cesar
//
// Data de Criação:     17/07/24
// Data de Modificação: 17/07/24
//
// Objetivo: calcular a faixa etaria
//

#include <stdio.h>
#include <string.h>

int main() {
    // Ler a idade
    int idade;
    printf("Digite a idade:");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade inválida (<0)");
        return 0;
    }

    // ver faixa etária
    char faixa[20];
    switch(idade) {
        case 0 ... 12:
            strcpy(faixa, "infancia");
            break;
        case 13 ... 17:
            strcpy(faixa, "adolescencia");
            break;
        case 18 ... 25:
            strcpy(faixa, "juventude");
            break;
        case 26 ... 35:
            strcpy(faixa, "adulto jovem");
            break;
        case 36 ... 45:
            strcpy(faixa, "adulto");
            break;
        case 46 ... 60:
            strcpy(faixa, "meia-idade");
            break;
        default:
            strcpy(faixa, "idoso");
            break;
    }
    printf("A faixa eh: %s", faixa);
}