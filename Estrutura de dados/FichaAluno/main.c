#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Aluno André Brito

typedef struct{
    int numero;
    char nome[40];
    float nota;
}ficha_aluno;

int main(){
    ficha_aluno aluno;

    printf("------Cadastro de Aluno------\n");
   
    printf("Informe o nome do aluno: ");
    fgets(aluno.nome, 40, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Número do Aluno: ");
    scanf("%d", &aluno.numero);

    printf("Nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n------Lendo os dados da struct------\n");

    printf("Nome do aluno: %s\n", aluno.nome);
    printf("Número do aluno: %d\n", aluno.numero);
    printf("Nota do aluno: %.2f\n", aluno.nota);
}