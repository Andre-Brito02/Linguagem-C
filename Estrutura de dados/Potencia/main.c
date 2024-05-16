#include "pot.h"
#include <stdio.h>
#include <stdlib.h>
//Aluno André Brito

int main(){
    potencia *pot = calcPotencia();

    if(pot != NULL){
        quadrado(pot, 2);
        cubo(pot, 2);

        imprimeResultadoQ(pot);
        imprimeResultadoC(pot);

        destruir(pot);
    }

    return 0;
}