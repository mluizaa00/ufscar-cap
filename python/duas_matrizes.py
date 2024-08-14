#
# Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
#
# Data de Criação:     14/08/24
# Data de Modificação: 14/08/24
#
# Objetivo: Leia os elementos de uma matriz de números reais 
# e multiple os valores de uma linha e de uma coluna, calculando a soma total disso
#

def main():
    # Pegar dimensões iniciais
    print(f"Qual a dimensão tem a matriz A?");
    dimensao_a = int(input())

    print(f"Qual a dimensão tem a matriz B?");
    dimensao_b = int(input())

    # Consumir cada elemento de cada matriz
    matriz_a = []
    for i in range(0, dimensao_a):
        for j in range(0, dimensao_a):
            print(f"Qual o elemento da linha %d e da coluna %d da matriz A?", i, j);
            matriz_a[i][j] = int(input())

    matriz_b = []
    for i in range(0, dimensao_b):
        for j in range(0, dimensao_b):
            print(f"Qual o elemento da linha %d e da coluna %d da matriz B?", i, j);
            matriz_b[i][j] = int(input())

    # Pegar a linha e a coluna que deve ser multiplicada
    print(f"Qual a linha de A que deve ser multiplicada?");
    linha_a = int(input())

    print(f"Qual a coluna de B que deve ser multiplicada?");
    coluna_b = int(input())

    # Executar a multiplicação
    soma_total = 0;
    for i in range(0, dimensao_a):
      elemento_a = matriz_a[linha_a - 1][i];
      elemento_b = matriz_b[i][coluna_b - 1];

      valor = elemento_a * elemento_b;
      soma_total += valor;

    # Mostrar resultado
    print(f"A soma final é: %d", soma_total);