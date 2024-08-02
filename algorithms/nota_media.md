//
// Autor: Maria Luiza Fernandes Prestes Cesar
//
// Data de Criação:     15/07/24
// Data de Modificação: 15/07/24
//
// Objetivo: calcular a quantidade de alunos com nota acima da média
//

Refinamentos sucessivos (detalhamentos dos passos)

Algoritmo alunosAcimaDaMedia
Input: nota média de N alunos (0 a 10)
Output: int -> quantidade de alunos que ultrapassaram a nota média da sala

begin
  |> Ler as notas médias dos alunos
  read numeroAlunos
  for i <- 0 to numeroAlunos - 1 do:
    read notasAlunos[i]
  endfor
  
  |> Calcular a média da sala
  read soma <- 0
  for i <- 0 to numeroAlunos - 1 do:
    soma += notasAlunos[i]
  endfor
  read mediaDaSala <- soma/numeroAlunos
          
  |> Calcular a quantidade de alunos acima da média
  quantidadeAlunosAcimaDaMedia <- 0
  for i <- to numeroAlunos - 1 do:
    if notaAluno > mediaSala:
      quantidadeAlunosAcimaDaMedia++
    endif
  endfor

  |> Mostrar o resultado
  write quantidadeAlunosAcimaDaMedia
end