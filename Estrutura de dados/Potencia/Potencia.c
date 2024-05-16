#include "pot.h"
#include "main.c"
#include <stdio.h>
#include <stdlib.h>
//Aluno André Brito

potencia *calcPotencia(){
    potencia *pot = (potencia*)malloc(sizeof(potencia));
    if(pot != NULL){
        pot -> resultadoQ = 0;
        pot -> resultadoC = 0;
    }
    return pot;
}

void destruir(potencia *pot){
    free(pot);
}

void quadrado(potencia *pot, int valor){
    pot -> resultadoQ = (valor * valor);
}

void cubo(potencia *pot, int valor){
    pot -> resultadoC = (valor * valor * valor);
}

void imprimeResultadoQ(const potencia *pot){
    printf("Quadrado = %.2f\n", pot -> resultadoQ);
}

void imprimeResultadoC(const potencia *pot){
    printf("Cubo = %.2f\n", pot -> resultadoC);
}