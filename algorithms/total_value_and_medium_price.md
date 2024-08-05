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
  read qtdTotal <- 0
  read valorTotal <- 0

  |> Ler os precos e quantidades
  read deveReceberMaisInput <- 1
  repeat 
    read price
    read qtd

    |> Como na documentacao, quando o preco e qtd se igualam a 0, encerra-se o input
    if price == 0 and qtd == 0
      deveReceberMaisInput <- 0
    endif

    qtdTotal += qtd
    valorTotal += price * qtd
  until deveReceberMaisInput == 0

  |> Calculo do valor medio
  read valorMedio <- valorTotal / qtdTotal

  |> Mostrar o resultado
  write valorMedio
  write valorTotal
end