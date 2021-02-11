#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
8. Utilizando o programa do exercício anterior, crie uma rotina para salvar o
conteúdo do vetor em um arquivo de forma binária, que é mais fácil de utilizar
quando trabalhamos com vetores de estruturas. Este seu novo programa deve
ser capaz de salvar todo o conteúdo gerado em uma seção de utilização, para
que o mesmo conteúdo seja recuperado na próxima seção de utilização, ou seja,
seu novo programa deve ser capaz de recuperar todos os dados gravados em
seção anterior para continuar o processamento. Tenha em mente que
dependendo do momento em que seu programa rodará, poderá acontecer o
caso de o arquivo não existir ainda (rodando a 1ª vez), então terá que ser criado,
e também acontecerá o caso em que o arquivo já foi criado em seção de trabalho
anterior (rodando da 2ª vez em diante), neste caso o arquivo já existe. Seu
programa deve ser capaz de identificar se o arquivo existe ou não, para que não
haja a perda dos dados de seções anteriores, que estão gravados no arquivo.
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
