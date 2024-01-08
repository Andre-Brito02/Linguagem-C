/*2. Faça um programa que receba o salário de um funcionário e o percentual de aumento
que ele terá. Calcule e mostre na tela o valor do aumento e o novo salário.*/
#include <stdio.h>

int main(){
    float salario, novo_salario, aumento, percentual;

    printf("Informe o salario: ");
    scanf("%f", &salario);
    
    printf("Informe o percentual de aumento: ");
    scanf("%f", &percentual);

    percentual = percentual / 100;
    aumento = salario * percentual;
    novo_salario = salario + aumento;

    printf("Valor do aumento = %.2f\nNovo salario = %.2f\n", aumento, novo_salario);
}