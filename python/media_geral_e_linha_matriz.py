"""
 Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)

 Data de Criação:     07/08/24
 Data de Modificação: 07/08/24

 Objetivo: calcula a média geral e média das linhas de uma matriz
"""


def main():
  linhas = 2
  colunas = 2
  matriz = [[1, 2], [3, 4]]

  elementos_total = linhas * colunas
  soma_total = 0

  for line in range(0, linhas):
    for column in range(0, colunas):
      element = matriz[line][column]
      soma_total += element

  media_geral = soma_total / elementos_total
  media_linhas = soma_total / linhas

  print(media_geral)
  print(media_linhas)


if __name__ == "__main__":
  main()