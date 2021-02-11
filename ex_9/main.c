#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minhalib.h"
/*
9. Desenvolva um TAD que represente uma esfera. Inclua as funções de
inicializações necessárias (criação, destruição, atribuição de valores, etc), e as
operações que retornem seu raio, sua área e seu volume. Todos os dados da
esfera devem ficar armazenados dentro do TAD.
*/
int main()
{
    ESFERA v;
    printf("-----(Programa de Representacao de Esfera)-----\n\n");
    v = atribuicaoValores();
    printf("----------------(Calculando...)----------------\n\n");
    v = calculando(v);
    printf("-------------------(Valores)-------------------\n\n");
    imprime(v);
    system("pause");
    return 0;
}
