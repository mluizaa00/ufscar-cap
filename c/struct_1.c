//
// Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
//
// Data de Criação:     12/08/24
// Data de Modificação: 12/08/24
//
// Leia os dados de todos os alunos da turma. Após a leitura de todos os dados, 
// mostre os dados lidos de cada aluno. 
// Cada aluno possui os seguintes dados: RA, nome, IRA, sexo, endereço e idade. 
// O endereço é dividido nas seguintes partes de forma a facilitar a busca por 
// alunos que moram em uma determinada cidade: tipo de logradouro, logradouro, 
// número, complemento, bairro, cidade e CEP.
//

#include <stdio.h>
#include <string.h>

// Estrutura para o objeto Pessoa
typedef struct 
{
    int ra;
    char *nome;
    int ira;
    char sexo;
    Endereco endereco;
    int idade;
    float notaMedia;
} Pessoa;

// Estrutura para o objeto Endereco, que sera utilizado para cada pessoa
typedef struct
{
    char tipo;
    char logradouro;
    int numero;
    char complemento;
    char *bairro;
    char *cidade;
    int cep;
} Endereco;

int main() {
    // Inicializacao de variaveis
    int numeroAlunos = 0;
    int qtdAlunosHomens = 0;
    int qtdAlunosMulheres = 0;
    int qtdAlunosAcimaNotaMedia = 0;
    float notaTotal = 0;
    int existeEmAraraquara = 0;

    Pessoa alunos[100];

    int stopLoop = 0;
    do {
        // Verificacao se deseja parar o loop
        printf("Gostaria de continuar com o input de alunos? (Y/N)");
        char continuar;
        scanf("%c", &continuar);
        if (continuar == 'N') {
            stopLoop == 1;
            break;
        }

        Pessoa pessoa;
        Endereco endereco;

        // Scan das propriedades do aluno
        printf("Digite o RA: ");
        scanf("%d", &pessoa.ra);
        printf("Digite o nome: ");
        scanf("%d", &pessoa.nome);
        printf("Digite o IRA: ");
        scanf("%d", &pessoa.ira);
        printf("Digite o sexo (M/F): ");
        scanf("%c", &pessoa.sexo);
        printf("Digite a idade: ");
        scanf("%d", &pessoa.idade);
        printf("Digite a nota média: ");
        scanf("%lf", &pessoa.notaMedia);
        printf("Digite o tipo do endereco (C/A): ");
        scanf("%c", &endereco.tipo);
        printf("Digite o logradouro (C/A): ");
        scanf("%c", &endereco.logradouro);
        printf("Digite o numero: ");
        scanf("%d", &endereco.numero);
        printf("Digite o complemento (C/A): ");
        scanf("%c", &endereco.complemento);
        printf("Digite o bairro: ");
        scanf("%s", &endereco.bairro);
        printf("Digite a cidade: ");
        scanf("%s", &endereco.cidade);
        printf("Digite o CEP: ");
        scanf("%d", &endereco.cep);

        &pessoa.endereco = endereco;
        // Print das propriedades do aluno
        printf("RA: %d, Nome: %s, IRA: %d, Sexo: %c, Idade: %d", 
            pessoa.ra, pessoa.nome, pessoa.ira, pessoa.sexo, pessoa.idade);

        numeroAlunos += 1;
        notaTotal += pessoa.notaMedia;

        // Insere o aluno numa lista com todas as pessoas
        alunos[numeroAlunos - 1] = pessoa;

        // Verificacao se o aluno é homem
        if (pessoa.sexo == 'M') {
            qtdAlunosHomens += 1;
        } else {
            qtdAlunosMulheres += 1;
        }
    } while (stopLoop == 0);

    // Calculo da nota media
    float notaMediaTurma = notaTotal / numeroAlunos;
    for (int i = 0; i < numeroAlunos; i++) 
    {
        Pessoa aluno = alunos[i];
        // Verificacao da nota media
        if (aluno.notaMedia >= notaMediaTurma) {
            qtdAlunosAcimaNotaMedia += 1;
        }

        // Verificacao de araraquara
        if (aluno.endereco.cidade == "Araraquara") {
            existeEmAraraquara = 1;
        }
    }

    // Expor resultado da validacao de araraquara
    if (existeEmAraraquara == 1) {
        printf("Existe aluno em Araraquara!");
    } else {
        printf("Não existe aluno em Araraquara");
    }

    // Expor resto dos resultados
    printf("Quantidade de alunos homens: %d", qtdAlunosHomens);
    printf("Quantidade de alunos mulheres: %d", qtdAlunosMulheres);
    printf("Quantidade de alunos acima da media: %d", qtdAlunosAcimaNotaMedia);
}