#include <stdio.h>
#include <stdlib.h>
/*
3. Crie um vetor dinâmicamente (alocando memória), de tamanho N passado pelo usuário,
e, utilizando a função rand() para geração de números aleatórios, preencha este vetor.
Em seguida crie uma função recursiva que retorne o menor elemento deste vetor.
Imprima todo o vetor e o valor retornado pela função recursiva.
*/


int func_rec(int *v, int n, int aux);

int main()
{
    srand(time(NULL));
    int *v, n, i, x, aux;

    printf("Digite o Tamanho do Vetor:\n");
    scanf("%d", &n);

    v = (int*) malloc(n * sizeof(int));

    if(v==NULL){
        printf("ERRO");
        exit(1);
    }

    for(i=0; i<n; i++){
        v[i]= rand()%1000;
        printf("%d  ", v[i]);
    }

    aux = 1000;
    x = func_rec(v, n, aux);

    printf("\n%d\n", x);

    system ("pause");
    return 0;
}

int func_rec(int *v, int n, int aux){
if(v[n]<aux){
    aux = v[n-1];
}
if(n == 1){
    return aux;
}
return func_rec(v, n-1, aux);
}
