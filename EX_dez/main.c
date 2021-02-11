#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libex10.h"
/*
10. Elabore em um programa um “Tipo Abstrato de Dados – TAD” para uma lista de
contatos.
O TAD deverá conter:
1- Dados do Contato
    a – Nome, e-mail, telefone
2 – Operações de manipulação dos contatos
    a – Inserir um novo contato
    b – Encontrar um nome na lista de contatos
    c – Remover um contato da lista
O programa deverá funcionar em um menu de opções initerruptamente. O menu deverá
ter uma opção própria para encerramento do programa.
*/
int main()
{
    int escolha, cont=1, sair;
    CONTATO c[50];


    inicio:
    printf("-----(PROGRAMA LISTA DE CONTATOS)-----\n\n");
    printf("Digite o numero correspondente a funcao desejada:\n1- Inserir um novo contato\n2- Encontrar um nome na lista de contatos\n3- Remover um contato da lista\n4- Finalizar o programa\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1 :
            c[cont] = novo();
            cont++;
            goto inicio;
            break;
        case 2 :
            busca(cont, c);
            goto inicio;
            break;
        case 3 :
            remocao(cont, c);
            goto inicio;
            break;
        case 4 :
            system("pause");
            return 0;
        default :
            printf("Opcao Invalida!\nDigite Qualquer tecla parada voltar ao menu\n");
            scanf("%d", &sair);
            system("cls");
            goto inicio;
    }
    return 0;
}
