#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa em que o usuário escolha a quantidade de alunos,
leia os dados de destes alunos e os armazene nessa estrutura. Em seguida, exiba
o nome e as notas do aluno que possua a maior média geral dentre todos.
*/
typedef struct str_aluno{
    int matricula;
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
}ALUNO;

ALUNO coletaDados();

int main()
{
    int n, x;
    float med[x], aux = 0;

    printf("Digite a Quantidade de alunos:\n");
    scanf("%d", &n);
    x = n;
    ALUNO p[x];

    for(x=0; x < n; x++){
        p[x] = coletaDados();
        med[x] = ((p[x].nota1, p[x].nota2, p[x].nota3)/3);
        if(med[x]>aux){
            aux = med[x];
        }
        system ("cls");
    }
    for(x=0;x<n;x++){
        if(med[x] == aux){
            printf("\nNome: %s\nNota 1: %f\nNota 2: %f\nNota 3: %f", p[x].nome, p[x].nota1, p[x].nota2, p[x].nota3);
        }
    }

    return 0;
}

ALUNO coletaDados(){

    ALUNO p;
    printf("Digite a Matricula:\n");
    scanf("%d", &p.matricula);
    printf("Digite o Nome do Aluno:\n");
    getchar();
    gets(p.nome);
    printf("Digite a nota 1:\n");
    scanf("%f", &p.nota1);
    printf("Digite a nota 2:\n");
    scanf("%f", &p.nota2);
    printf("Digite a nota 3:\n");
    scanf("%f", &p.nota3);

    return p;
}
