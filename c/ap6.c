//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     09/09/24
// Data de Modificação: 09/09/24
//
// Implemente e teste no programa principal as seguintes sub-rotinas de manipulação de um número racional:
// - Escrever um número racional r
// - Ler um número racional r
// - Simplificar um número racional r
// - Somar dois números racionais r1 e r2 (r1 + r2)
// - Multiplicar dois números racionais r1 e r2 (r1 * r2)
//

#include <stdio.h>
#include <string.h>

// Estruturas
typedef struct {
    int numerador;
    int denominador;
} tRacional;

// Interfaces
void escrever(tRacional racional);
tRacional ler(int numerador, int denominador);
void simplificar(tRacional racional);
tRacional somar(tRacional r1, tRacional r2);  
tRacional multiplicar(tRacional r1, tRacional r2);  
int mdc(int n1, int n2);  
int mmc(int n1, int n2);  

int main() 
{
    // Leitura e escrita básica
    tRacional racionalInicial = ler(5, 9);
    escrever(racionalInicial);

    // Simplificacao
    tRacional r1 = ler(5, 10);
    escrever(r1);
    simplificar(r1);
    escrever(r1);

    // Multiplicacao
    tRacional r2 = ler(5, 9);
    tRacional r3 = ler(2, 3);
    tRacional multiplicado = multiplicar(r2, r3);
    escrever(multiplicado);

    // Soma
    tRacional somado = somar(r2, r3);
    escrever(somado);
}

/*
Sub-rotina: escrever
Objetivo: printar o racional
Parâmetros:
- racional: número racional na estrutura de dados (entrada de dados)
*/
void escrever(tRacional racional) {
    printf("O racional eh: %d/%d", racional.numerador, racional.denominador);
}

/*
Sub-rotina: ler
Objetivo: criar um racional
Parâmetros:
- numerador: numerador do racional
- denominador: denominador do racional
*/
tRacional ler(int numerador, int denominador) {
    tRacional racional;
    racional.numerador = numerador;
    racional.denominador = denominador;

    return racional;
}

/*
Sub-rotina: simplificar
Objetivo: simplificar um numero racional
Parâmetros:
- racional: numero racional a ser simplificado
*/
void simplificar(tRacional racional) {
    int divisor = mdc(racional.numerador, racional.denominador);
    racional.numerador = racional.numerador / divisor;
    racional.denominador = racional.denominador / divisor;
}

/*
Sub-rotina: multiplicar
Objetivo: multiplicar dois numeros racionais
Parâmetros:
- r1: primeiro numero racional a ser multiplicado
- r2: primeiro numero racional a ser multiplicado
*/
tRacional multiplicar(tRacional r1, tRacional r2) {
    tRacional racional;

    racional.numerador = r1.numerador * r2.numerador;
    racional.denominador = r1.denominador * r2.denominador;

    return racional;
}

/*
Sub-rotina: somar
Objetivo: somar dois numeros racionais
Parâmetros:
- r1: primeiro numero racional a ser somado
- r2: primeiro numero racional a ser somado
*/
tRacional somar(tRacional r1, tRacional r2) {
    tRacional racional;
    if (r1.denominador == r2.denominador) {
        racional.numerador = r1.numerador + r2.numerador;
        racional.denominador;
        return racional;
    }

    int minimo = mmc(r1.denominador, r2.denominador);

    int numerador = r1.numerador * (r1.denominador / minimo) + r2.numerador * (r2.denominador / minimo);
    racional.numerador = numerador;
    return racional;
}

/*
Sub-rotina: mdc
Objetivo: obter o maximo divisor comum entre dois numeros
Parâmetros:
- n1: primeiro numero
- n2: segundo numero
*/
int mdc(int n1, int n2) {
    int gcd = 1;
    for (int i=1; i <= n1 && i <= n2; ++i)
    {
        if (n1%i==0 && n2%i==0) 
        {
            gcd = i;
        }
    }
    return gcd;
}

/*
Sub-rotina: mmc
Objetivo: obter o minimo divisor comum entre dois numeros
Parâmetros:
- n1: primeiro numero
- n2: segundo numero
*/
int mmc(int n1, int n2) {
    int res = (n1 > n2) ? n1 : n2;

	while (1) {
		if (res % n1 == 0 && res % n2 == 0) {
            return res;
		}
		++res;
	}
}