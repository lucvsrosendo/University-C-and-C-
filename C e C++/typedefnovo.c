#include <stdio.h>
#include <stdlib.h>


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char rua[30];
    int numero;
    char bairro[30];
    char cidade[30];
    char estado[3]; 
    int cep;
} Endereco;

struct FichaAluno {
    int matricula;
    char nome[50];
    char disciplina[30];
    float nota;
    Data datanasc;
    Endereco endaluno;
};

int main(void) {
    struct FichaAluno aluno[2];
    int i;

    printf("\n Ficha do Aluno \n");

    for (i = 0; i < 2; i++) {
        printf("Matricula do aluno: ");
        scanf("%d", &aluno[i].matricula);
        clear_input_buffer();

        printf("Nome do aluno: ");
        scanf("%49s", aluno[i].nome);
        clear_input_buffer();

        printf("Informe o endereco do aluno (Rua): ");
        scanf("%29s", aluno[i].endaluno.rua);
        clear_input_buffer();

        printf("Informe o endereco do aluno (Numero): ");
        scanf("%d", &aluno[i].endaluno.numero);
        clear_input_buffer();

        printf("Informe do endereco do aluno (Bairro): ");
        scanf("%29s", aluno[i].endaluno.bairro);
        clear_input_buffer();

        printf("Informe o endereco do aluno (Cidade): ");
        scanf("%29s", aluno[i].endaluno.cidade);
        clear_input_buffer();

        printf("Informe o endereco do aluno (Estado): ");
        scanf("%2s", aluno[i].endaluno.estado);
        clear_input_buffer();

        printf("Informe o endereco do aluno (CEP): ");
        scanf("%d", &aluno[i].endaluno.cep);
        clear_input_buffer();

        printf("Informe a data de nascimento do aluno (Dia): ");
        scanf("%d", &aluno[i].datanasc.dia);
        clear_input_buffer();

        printf("Informe a data de nascimento do aluno (Mes): ");
        scanf("%d", &aluno[i].datanasc.mes);
        clear_input_buffer();

        printf("Informe a data de nascimento do aluno (Ano): ");
        scanf("%d", &aluno[i].datanasc.ano);
        clear_input_buffer();

        printf("Disciplina do aluno: ");
        scanf("%29s", aluno[i].disciplina);
        clear_input_buffer();

        printf("Informe a nota do aluno: ");
        scanf("%f", &aluno[i].nota);
        clear_input_buffer();
    }

    for (i = 0; i < 2; i++) {
        printf("\n Ficha do aluno\n");
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Endereco: %s, %d, Bairro %s, Cidade %s, Estado %s, CEP: %d\n",
               aluno[i].endaluno.rua, aluno[i].endaluno.numero, aluno[i].endaluno.bairro,
               aluno[i].endaluno.cidade, aluno[i].endaluno.estado, aluno[i].endaluno.cep);
        printf("Data de Nascimento: %d/%d/%d\n", aluno[i].datanasc.dia, aluno[i].datanasc.mes, aluno[i].datanasc.ano);
        printf("Disciplina: %s\n", aluno[i].disciplina);
        printf("Nota: %.2f\n\n", aluno[i].nota);
    }

    system("PAUSE");
    return 0; 

}  