#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
6. Crie uma estrutura chamada Ret�ngulo. Essa estrutura dever� conter o ponto
superior esquerdo e o ponto inferior direito do ret�ngulo. Cada ponto � definido
por uma estrutura Ponto, a qual cont�m as posi��es X e Y. Fa�a um programa
que declare e leia uma estrutura Ret�ngulo e exiba a �rea e o comprimento da
diagonal e o per�metro desse ret�ngulo.
*/

struct str_ponto{
        float x;
        float y;
};

typedef struct str_retangulo{
    struct str_ponto pp;
    struct str_ponto sp;
}RETANGULO;

int main()
{
    float area, perimetro, diag;
    RETANGULO ret;

    printf("Digite a Coordenada x do Primeiro Ponto:\n");
    scanf("%f", &ret.pp.x);
    printf("Digite a Coordenada y do Primeiro Ponto:\n");
    scanf("%f", &ret.pp.y);
    printf("Digite a Coordenada x do Segundo Ponto:\n");
    scanf("%f", &ret.sp.x);
    printf("Digite a Coordenada y do Segundo Ponto:");
    scanf("%f", &ret.sp.y);

    area = (ret.sp.x-ret.pp.x)*(ret.pp.y-ret.sp.y);
    perimetro = (ret.sp.x-ret.pp.x)*2+(ret.pp.y-ret.sp.y)*2;
    diag = (ret.sp.x-ret.pp.x)*(ret.sp.x-ret.pp.x)+(ret.pp.y-ret.sp.y)*(ret.pp.y-ret.sp.y);
    diag = sqrt(diag);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f", diag);

    return 0;
}
