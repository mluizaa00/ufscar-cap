//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     05/08/24
// Data de Modificação: 05/08/24
//
// Objetivo: Fornecidos uma lista de preços e quantidades sobre 
// mídias de DVD, calcule e mostre o valor total em estoque (R$) e o preço médio da unidade de DVD.
//

Refinamentos sucessivos (detalhamentos dos passos)

Algoritmo valorTotalEPrecoMedioDvd
Input: lista de precos e quantidades de midias de dvd
Output: valor total em estoque e preco medio da unidade de dvd

begin
  |> Inicializar valores default
  read quantidadeTotalDeDvds <- 0
  read valorTotalDePreco <- 0

  |> Ler os precos e quantidades
  read deveReceberMaisInput <- 1
  repeat 
    read preco
    read quantidade

    |> Como na documentacao, quando o preco e quantidade se igualam a 0, encerra-se o input
    if preco == 0 and quantidade == 0
      deveReceberMaisInput <- 0
    endif

    quantidadeTotalDeDvds += quantidade
    valorTotalDePreco += preco * quantidade
  until deveReceberMaisInput == 0

  |> Calculo do valor medio
  read valorMedio <- valorTotalDePreco / quantidadeTotalDeDvds

  |> Mostrar o resultado
  write valorMedio
  write valorTotalDePreco
end