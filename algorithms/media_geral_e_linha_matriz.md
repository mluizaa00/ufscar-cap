//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     07/08/24
// Data de Modificação: 07/08/24
//
// Objetivo: media dos elementos de uma matriz
//

Refinamentos sucessivos (detalhamentos dos passos)

Algoritmo somaLinhasImpares
Input: numero de linhas, numero de colunas, matriz
Output: soma das linhas impares

begin
  |> Valores de input
  read linhas, colunas, matriz

  |> Valores iniciais
  read elementosTotais <- linhas * colunas
  read somaTotal <- 0

  |> Estrutura de repeticão para acessar cada elemento da matriz
  for i <- 0 to linhas - 1 do
    for j <- 0 to colunas - 1 do
      elemento = matriz[i][j]
      somaTotal += elemento
    end for
  end for

  |> Cálculo das médias
  mediaGeral <- somaTotal / elementosTotais
  mediaLinha <- somaTotal / linhas

  |> Exibir resultados
  write mediaGeral
  write mediaLinha
end