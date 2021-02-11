#include <stdio.h>
#include <stdlib.h>
/*
5. Utilizando os dados do exercício anterior, crie agora uma função recursiva que
retorne a soma dos elementos deste mesmo vetor. Faça este exercício
separadamente do anterior.
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

    aux = 0;
    x = func_rec(v, n, aux);

    printf("\n%d\n", x);

    system ("pause");
    return 0;
}

int func_rec(int *v, int n, int aux){
aux = aux + v[n-1];
if(n == 1){
    return aux;
}
return func_rec(v, n-1, aux);
}
