//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     2/08/24
// Data de Modificação: 26/08/24
//
// Leia os dados de N alunos de uma turma. Cada aluno possui os seguintes 
// dados: RA, nome, IRA e sexo. Em seguida, calcule quantos alunos possuem 
// IRA maior que a média do IRA de todos os alunos da turma. Mostre na tela do
// computador os resultados calculados.
//

#include <stdio.h>
#include <string.h>

// Estrutura para o objeto Vinho
typedef struct 
{
    char *nome;
    int ra;
    int ira;
    char sexo;
} Aluno;

// Interfaces
int calcularIraMedio(int soma, int qtdAlunos);
int alunosAcimaDoIraMedio(Aluno alunos[], int iraMedio, int qtdAlunos);

int main() 
{
    // Inicializacao de variaveis
    Aluno alunos[100];

    int stopLoop = 0;
    int total = 0;

    int maiorIndex = 0;
    int maiorPreco = 0;

    int soma = 0;
    do {
        Aluno aluno;

        // Scan das propriedades do vinho
        printf("Digite o nome: ");
        scanf("%d", &aluno.nome);

        // Acabar com o input de alunos
        if (&aluno.nome == "FIM") {
            stopLoop = 1;
            break;
        }

        total += 1;

        // Obter valores do aluno
        printf("Digite o RA: ");
        scanf("%d", &aluno.ra);
        printf("Digite o IRA: ");
        scanf("%d", &aluno.ira);
        printf("Digite o sexo (F/M): ");
        scanf("%c", &aluno.sexo);

        soma += aluno.ira;
    } while (stopLoop == 0);

    // Realizar cálculos necessários
    int iraMedio = calcularIraMedio(soma, total);
    int acimaDoIra = alunosAcimaDoIraMedio(alunos, iraMedio, total);

    // Exibir valores
    printf("IRA medio: %d", iraMedio);
    printf("QTD alunos acima do ira medio: %d", acimaDoIra);
}

/*
Sub-rotina: calcularIraMedio
Objetivo: Calcular IRA médio dos alunos
Parâmetros:
 - soma: Soma dos IRAs (entrada de dados)
 - qtdAlunos: Quantidade de alunos (entrada de dados)
Valor de Retorno:
- Resultado final do cálculo aritmético
*/
int calcularIraMedio(int soma, int qtdAlunos) 
{
    // calculo da media aritmetica
    return soma / qtdAlunos;
}

/*
Sub-rotina: alunosAcimaDoIraMedio
Objetivo: Calcular a quantidade de alunos acima do IRA médio
Parâmetros:
 - alunos: lista dos alunos (entrada de dados)
 - iraMedio: valor do ira medio entre os alunos (entrada de dados)
 - qtdAlunos: quantidade de alunos (entrada de dados)
Valor de Retorno:
- Quantidade de alunos com IRA acima da média
*/
int alunosAcimaDoIraMedio(Aluno alunos[], int iraMedio, int qtdAlunos) 
{
    int acimaDoIra = 0;
    // Para cada aluno, compara com o ira medio e adiciona ele caso seja acima
    for (int i = 0; i < qtdAlunos; i++) {
        Aluno aluno = alunos[i];
        if (aluno.ira > iraMedio) {
            acimaDoIra += 1;
        }
    }

    return acimaDoIra;
}