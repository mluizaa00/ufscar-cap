//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     02/09/24
// Data de Modificação: 02/08/24
//
// Implemente e teste no programa principal uma sub-rotina para 
// calcular o MDC (máximo divisor comum) entre 2 números inteiros.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Interfaces
void lerNumerosECalcularMDC();
int calcularMaximoDivisorComum(int numeroUm, int numeroDois);
bool restoIgualZero(int n, int i);

int main() 
{
    lerNumerosECalcularMDC();
}

/*
Sub-rotina: lerNumerosECalcularMDC
Objetivo: Scaneia os números e cálcula o MDC a partir deles
Parâmetros: Nenhum
Valor de Retorno: vazio
*/
void lerNumerosECalcularMDC() 
{
    int numeroUm;
    int numeroDois;

    printf("Qual o primeiro numero?");
    scanf("%d", &numeroUm);
    printf("Qual o segundo numero?");
    scanf("%d", &numeroDois);

    int maximoDivisorComum = calcularMaximoDivisorComum(numeroUm, numeroDois);
    printf("O máximo divisor comum de %d e %d é %d.", numeroUm, numeroDois, maximoDivisorComum);
}

/*
Sub-rotina: calcularMaximoDivisorComum
Objetivo: Calcular o máximo divisor comum entre dois números
Parâmetros:
 - numeroUm: primeiro número (entrada de dados)
 - numeroDois: segundo número (entrada de dados)
Valor de Retorno:
- Número que é o máximo divisor comum entre os dois números providenciados
*/
int calcularMaximoDivisorComum(int numeroUm, int numeroDois) 
{
    int maximoDivisorComum = 1;
    for (int i = 1; i <= numeroUm && i <= numeroDois; ++i)
    {
        // Verifica se i é um fator divisor do numero um e dois
        if (restoIgualZero(numeroUm, i) && restoIgualZero(numeroDois, i)) 
        {
            maximoDivisorComum = i;
        }
    }

    return maximoDivisorComum;
}

/*
Sub-rotina: restoIgualZero
Objetivo: Verifica se o resto da operação é igual a zero
Parâmetros:
 - n: número a ser dividido (entrada de dados)
 - i: divisor (entrada de dados)
Valor de Retorno:
- Boolean que indica se o resto é igual a zero (true) ou não (false)
*/
bool restoIgualZero(int n, int i) {
    return n % i == 0;
}