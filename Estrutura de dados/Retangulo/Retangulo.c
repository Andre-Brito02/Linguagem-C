#include <stdio.h>
#include "ret.h"
#include <stdlib.h>
#include "main.c"

Retangulo criarRetangulo(float comprimento, float largura)
{
	Retangulo ret;
	ret.comprimento = comprimento;
	ret.largura = largura;
	return ret;
}

float calcularArea (Retangulo ret){
	return ret.comprimento * ret.largura;
}