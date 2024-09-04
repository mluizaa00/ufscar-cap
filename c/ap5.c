//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     04/09/24
// Data de Modificação: 04/09/24
//
// implementação do tipo abstrato de dados Conjunto. Para isto, é necessário 
// definir uma estrutura de dados adequada para armazenar os elementos do 
// conjunto, no caso específico um conjunto de números inteiros, e também 
// implementar as operações que atuam sobre conjuntos.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Constantes
#define MAX_ELEMENTOS 1000

// Estruturas
typedef struct {

    int nElementos; // número de elementos no conjunto (valor entre 0 e MAX_ELEMENTOS)
    int elementos[MAX_ELEMENTOS]; // elementos do conjunto

} Conjunto;

// Interfaces
void inserir(Conjunto conjunto, int numero);
void inserirVarios(Conjunto conjunto, int numeros[], int numeroElementos);

int main() 
{
    Conjunto conjunto;
    conjunto.nElementos = 0;

    int numeroInicial = 5;
    inserir(conjunto, numeroInicial);

    int numeros[] = {1,2,3,4,5};
    inserirVarios(conjunto, numeros, 5);
}

/*
Sub-rotina: inserir
Objetivo: inserir elemento no conjunto
Parâmetros:
- conjunto: conjunto em questão (entrada de dados)
- numero: numero a ser inserido no conjunto (entrada de dados)
*/
void inserir(Conjunto conjunto, int numero) 
{
    // adicionar numero da lista do conjunto
    if (conjunto.nElementos == 0) {
        conjunto.elementos[0] = numero;
    } else {
        conjunto.elementos[conjunto.nElementos + 1] = numero;
    }
    // aumentar size do conjunto
    conjunto.nElementos += 1;
}

/*
Sub-rotina: inserirVarios
Objetivo: inserir varios elementos no conjunto
Parâmetros:
- conjunto: conjunto em questão (entrada de dados)
- numeros: numeros a serem inseridos no conjunto (entrada de dados)
- numeroElementos: qtd de numeros a serem inseridos no conjunto (entrada de dados)
*/
void inserirVarios(Conjunto conjunto, int numeros[], int numeroElementos) 
{
    for (int i = 0; i < numeroElementos; i++) {
        inserir(conjunto, numeros[i]);
    }
}