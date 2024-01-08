/*1. Faça um programa que receba três notas de um aluno e seus respectivos pesos. Calcule
e mostre a média ponderada dessas notas.*/
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media_ponderada;
    int peso1, peso2, peso3;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    printf("Digite o peso da nota 1: ");
    scanf("%d", &peso1);
    printf("Digite o peso da nota 2: ");
    scanf("%d", &peso2);
    printf("Digite o peso da nota 3: ");
    scanf("%d", &peso3);

    media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("Resultado da media ponderada = %.2f\n", media_ponderada);
    
}