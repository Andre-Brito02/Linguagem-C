#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QTD 4
//Aluno André Brito

typedef struct{
    char nome[40];
    float notas[QTD];
}Aluno;


int main(){
    Aluno alunos;

    int qtd_alunos;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    for(int i = 0; i < qtd_alunos; i++){
        //Pega o nome do(a) aluno(a)
        printf("Digite o nome do(a) %d° Aluno(a): ", i+1);
        fgets(alunos.nome, 40, stdin);
        alunos.nome[strcspn(alunos.nome, "\n")] = '\0';//Troca o \n por \0

        //Pega as notas do(a) aluno(a)
        for(int j = 0; j < QTD; j++){
            printf("Digite a %d° nota do(a) %d° aluno(a): ", j+1, i+1);
            scanf("%f", &alunos.notas[j]);
        }

        //Exibe as informações
        printf("\n------Dados do(a) %d° aluno(a)------\n", i+1);
        printf("Nome: %s\n", alunos.nome);

        for(int k = 0; k < QTD; k++){
            printf("Nota %d°: %.2f\n", k+1, alunos.notas[k]);
        }
        printf("------Fim dos dados do(a) %d° aluno(a)------\n", i+1);
        
        //Limpa o buffer
        setbuf(stdin, NULL);

        printf("\n");
    }//for

}//main