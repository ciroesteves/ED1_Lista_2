#include <stdio.h>
#include <stdlib.h>
/*
7. Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a
idade e o endereço de uma pessoa. Agora, escreva uma função que receba um
inteiro “n” e retorne o ponteiro para um bloco de memória alocado
dinamicamente, para ser utilizado como vetor do tamanho “n”, que foi passado
para a função. Solicite também que o usuário digite os dados desse vetor dentro
de uma função específica para coleta de dados.
*/
typedef struct str_cadastro{
    char nome[30];
    int idade;
    char endereco[50];
}CADASTRO;

CADASTRO coletaDados();
CADASTRO *alocandoMemo(int n);

int main()
{
    int n, i;

    printf("Digite o Tamanho do Vetor Alocado:\n");
    scanf("%d", &n);

    CADASTRO *v;

    v = alocandoMemo(n);

    for(i=0; i<n; i++){
        v[i] = coletaDados();
    }

    for(i=0; i<n; i++){
        printf("\n%s", v[i].nome);
        printf("%d", v[i].idade);
        printf("\n%s_______________________", v[i].endereco);
    }
// LIBERANDO ESPACO ALOCADO
    free(v);
    return 0;
}

CADASTRO coletaDados(){
    CADASTRO c;

    printf("Digite o Nome:\n");
    fflush(stdin);
    fgets(c.nome,30,stdin);
    printf("Digite a Idade:\n");
    scanf("%d", &c.idade);
    printf("Digite o Endereco:\n");
    fflush(stdin);
    fgets(c.endereco,50,stdin);
    system ("cls");
return c;
}

CADASTRO *alocandoMemo(int n){
    CADASTRO *v;
    v = (int*) malloc(n * sizeof(CADASTRO));

return v;
}
