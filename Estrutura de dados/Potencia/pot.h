#ifndef POT_H_INCLUDED
#define POT_H_INCLUDED
//Aluno André Brito

typedef struct{
    float resultadoQ;
    float resultadoC;
}potencia;

//funções
potencia *calcPotencia();

void destruir(potencia *calcPotencia);
void quadrado(potencia *calcPotencia, int valor);
void cubo(potencia *calcPotencia, int valor);
void imprimeResultadoQ(const potencia *calcPotencia);
void imprimeResultadoC(const potencia *calcPotencia);

#endif