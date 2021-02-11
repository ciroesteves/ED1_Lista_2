#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minhalib.h"

//receber os dados
ESFERA atribuicaoValores(){
    ESFERA v;
    float d;
    printf("Digite o Diametro da esfera:\n");
    scanf("%f", &v.diametro);
    system("cls");
return v;
}
//formulas da esfera
ESFERA calculando(ESFERA v){
    v.raio = v.diametro/2;
    v.area = (M_PI*(v.raio*v.raio));
    v.volume = ((4*M_PI*v.raio*v.raio*v.raio)/3);
return v;
}
//imprimindo valores
void imprime(ESFERA v){
    printf("O Raio eh igual a %.2f.\n", v.raio);
    printf("A Area eh igual a %.2f.\n", v.area);
    printf("O Volume eh igual a %.2f.\n", v.volume);
}
