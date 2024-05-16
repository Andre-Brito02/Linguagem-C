#include <stdio.h>
#include <stdio.h>
#include "ret.h"

int main(){
	Retangulo meuRetangulo = criarRetangulo(5.0, 3.0);
	
	float area = calcularArea(meuRetangulo);
	printf("A area do retangulo eh: %.2f\n", area);
	
	return 0;
}