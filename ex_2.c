#include <stdio.h>
#include <stdlib.h>
/*
2. Crie uma função recursiva que receba por parâmetro dois valores inteiros x e y,
calcule e retorne o resultado de x^y para o programa principal.
*/
int func_rec(int x, int y, int aux);

int main()
{
    int n, x, y, aux;

    printf("Digite um numero inteiro x:\n");
    scanf("%d", &x);
    printf("Digite um numero inteiro y:\n");
    scanf("%d", &y);

    printf("\nFuncao Recursiva");
    aux = 1;
    n = func_rec(x, y, aux);

    printf("\n\nX^Y= %d", n);

    printf("\n\n");
    system ("pause");

    return 0;
}

int func_rec(int x, int y, int aux){
    aux = aux * x;
    if(y == 1){
        return aux;
    }
    return (func_rec(x, y-1 , aux));
}
