/*5. Faça um programa que receba o valor de cachê de um show e o preço do ingresso para
este show. Considere que o preço do ingresso é único. O programa deverá calcular e
mostrar a quantidade de convites que devem ser vendidos para que pelo menos o custo do
cachê seja alcançado.*/
#include <stdio.h>

int main(){
    //criar uma variavel que receba o valor do cache
    int valor_cache;
    //criar uma variavel que receba o preco do ingresso
    int preco_ingresso;
    //criar uma variavel que calculara a qtd de convites
    int convites;

    //pedir ao usuario os valores do cache e ingresso
    printf("Digite o valor do cache de um show: ");
    scanf("%d", &valor_cache);
    printf("Digite o preco do ingresso do show: ");
    scanf("%d", &preco_ingresso);

    //calcular a qtd de convites necessarios para que o custo do cache seja alcancado
    convites = valor_cache / preco_ingresso;

    //exibir a qtd de convites 
    printf("Quantidade de convites necessarios = %d\n", convites);

}