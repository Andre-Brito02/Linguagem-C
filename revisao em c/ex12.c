/*12. Faça um programa que receba dez idades, pesos e alturas e calcule e mostre:
a) a média das idades das dez pessoas;
b) a quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1,50.
c) a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que
medem mais de 1,90.*/
#include <stdio.h>

int main(){
    int idade, peso, qtd_pessoas = 0, pessoas_intervalo = 0;
    float altura, media_idades, porcentagem;

    for(int i = 0; i < 10; i++){
        printf("Informe a idade da pessoa %d: ", i+1);
        scanf("%d", &idade);
        printf("Informe o peso da pessoa %d: ", i+1);
        scanf("%d", &peso);
        printf("Informe a altura da pessoa %d: ", i+1);
        scanf("%f", &altura);

        media_idades += idade;

        if(peso > 90 && altura < 1.5){
            qtd_pessoas++;
        }

        if((idade >=10 && idade <= 30) && altura > 1.9){
            pessoas_intervalo++;
        } 
    }//for

    porcentagem = (100 * pessoas_intervalo) / 10;

    printf("Media das idades = %.2f\n", media_idades/10);
    printf("Quantidade de pessoas com peso superior a 90 e menores que 1.5m = %d\n", qtd_pessoas);
    printf("Porcentagem de pessoas entre 10 e 30 anos com mais de 1.9m de altura = %.2f\n", porcentagem);

}