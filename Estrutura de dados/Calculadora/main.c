#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/*Aluno André Brito*/

int main(){
    //Exemplo de uso da calculadora
    Calculadora *calc = criarCalculadora();//Inicia com zero a calculadora
    
    if(calc != NULL){
        somar(calc, 5);
        multiplicar(calc, 3);
        subtrair(calc, 2);

        imprimirResultado(calc);
        destruirCalculadora(calc);
    }

    return 0;
}