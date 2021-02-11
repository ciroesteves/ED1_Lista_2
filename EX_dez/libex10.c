#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libex10.h"

//a – Inserir um novo contato
CONTATO novo(){
    CONTATO c;
    printf("-----(Novo Contato)-----\n\n");
    printf("Digite o nome:\n");
    fflush(stdin);
    fgets(c.nome, 25, stdin);
    printf("Digite o e-mail:\n");
    fflush(stdin);
    fgets(c.email, 30, stdin);
    printf("Digite o telefone:\n");
    fflush(stdin);
    fgets(c.telefone, 12, stdin);
    system("cls");
    return c;
}
//b – Encontrar um nome na lista de contatos
CONTATO busca(int n, CONTATO c[]){
    char pesq_nome[25];
    int i, sair;

    printf("-----(Busca Contato)-----\n\n");
    printf("Digite o nome do contato:\n");
    fflush(stdin);
    fgets(pesq_nome, 25, stdin);
    for(i=1;i<=n;i++){
        if(strcmp(pesq_nome, c[i].nome)==0){
            printf("\nNome: %sE-mail: %sTelefone: %s_______________________________", c[i].nome, c[i].email, c[i].telefone);
        }
    }
    printf("Digite qualquer botao para sair.");
    scanf("%d", &sair);
    system("cls");
}
//c – Remover um contato da lista
CONTATO remocao(int n, CONTATO c[]){
    char pesq_nome[25];
    int i;
    printf("-----(Busca Contato)-----\n\n");
    printf("Digite o nome do contato:\n");
    fflush(stdin);
    fgets(pesq_nome, 25, stdin);
    for(i=1;i<=n;i++){
        if(strcmp(pesq_nome, c[i].nome)==0){
            strcpy(c[i].nome, "Deletado");
            strcpy(c[i].email, "Deletado");
            strcpy(c[i].telefone, "Deletado");
            system("cls");
        }
    }
}
