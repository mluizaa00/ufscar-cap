#
# Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
#
# Data de Criação:     14/08/24
# Data de Modificação: 14/08/24
#
# Objetivo: Leia os elementos de uma matriz de números reais 
# e calcule o maior valor
#

def main():
    # Pegar dimensões iniciais
    print(f"Qual a dimensão tem a matriz A?");
    dimensao_a = int(input())

    # Consumir cada elemento de cada matriz
    matriz_a = []
    for i in range(0, dimensao_a):
        for j in range(0, dimensao_a):
            print(f"Qual o elemento da linha %d e da coluna %d da matriz A?", i, j);
            matriz_a[i][j] = int(input())

    # Executar a multiplicação
    maior_valor = 0;
    for i in range(0, dimensao_a):
      for j in range(0, dimensao_a):
        elemento = matriz_a[i][j]
        if elemento > maior_valor:
           maior_valor = elemento

    # Mostrar resultado
    print(f"O maior valor é: %d", maior_valor);