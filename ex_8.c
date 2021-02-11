#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
8. Utilizando o programa do exerc�cio anterior, crie uma rotina para salvar o
conte�do do vetor em um arquivo de forma bin�ria, que � mais f�cil de utilizar
quando trabalhamos com vetores de estruturas. Este seu novo programa deve
ser capaz de salvar todo o conte�do gerado em uma se��o de utiliza��o, para
que o mesmo conte�do seja recuperado na pr�xima se��o de utiliza��o, ou seja,
seu novo programa deve ser capaz de recuperar todos os dados gravados em
se��o anterior para continuar o processamento. Tenha em mente que
dependendo do momento em que seu programa rodar�, poder� acontecer o
caso de o arquivo n�o existir ainda (rodando a 1� vez), ent�o ter� que ser criado,
e tamb�m acontecer� o caso em que o arquivo j� foi criado em se��o de trabalho
anterior (rodando da 2� vez em diante), neste caso o arquivo j� existe. Seu
programa deve ser capaz de identificar se o arquivo existe ou n�o, para que n�o
haja a perda dos dados de se��es anteriores, que est�o gravados no arquivo.
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
    setlocale(LC_ALL, "");
    FILE *f1;
    f1 = fopen("arquivo1.txt","ab");
    int n, i;

    printf("Digite o Tamanho do Vetor Alocado:\n");
    scanf("%d", &n);

    CADASTRO *v;

    v = alocandoMemo(n);

    for(i=0; i<n; i++){
        v[i] = coletaDados();
    }

    fwrite(v, sizeof(CADASTRO), n, f1);
    fclose(f1);

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
