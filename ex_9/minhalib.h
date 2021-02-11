typedef struct str_esfera{
    float diametro;
    float raio;
    float area;
    float volume;
}ESFERA;
//receber os dados
ESFERA atribuicaoValores();
//formulas da esfera
ESFERA calculando(ESFERA v);
//imprimindo valores
void imprime(ESFERA v);
