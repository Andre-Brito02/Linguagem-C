/*7. Faça um programa que receba três notas de um aluno, calcule e mostre a média
aritmética, e a mensagem que segue abaixo. Para alunos de exame, calcule e mostre a
nota que deverá ser tirada no exame para aprovação, considerando que a média no exame
é 6.0.*/
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    if(media >= 0.0 && media <= 2.9){
        printf("Reprovado");
    }

    else if(media >= 3.0 && media <= 6.9){
        printf("Exame\n");

        float exame;
        printf("Informe a nota tirada no exame: ");
        scanf("%f", &exame);

        if(exame >= 6.0){
            printf("Aprovado");
        }else{
            printf("Reprovado");
        }
    }

    else{
        printf("Aprovado");
    }

}