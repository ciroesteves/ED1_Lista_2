#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minhalib.h"
/*
9. Desenvolva um TAD que represente uma esfera. Inclua as fun��es de
inicializa��es necess�rias (cria��o, destrui��o, atribui��o de valores, etc), e as
opera��es que retornem seu raio, sua �rea e seu volume. Todos os dados da
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
