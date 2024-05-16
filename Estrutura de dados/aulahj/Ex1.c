#include <stdio.h>
#include <stdlib.h>
//André Brito

int main(){
    //criacao do vetor que sera alocado dinamicamente
    int *valores;
    //criacao das variaveis que receberao a quantidade de valores e a soma iniciada com 0
    int qtd, soma = 0;

    //pedir ao usuario digitar a quantidade de valores
    printf("Digite a quantidade de valores do vetor: ");
    scanf("%d", &qtd);

    //alocar dinamicamente o tamanho do vetor
    valores = malloc(qtd * sizeof(int));

    //pegar os valores do vetor pelo usuario, e aumentar o valor de soma
    for(int i = 0; i < qtd; i++){
        printf("Digite os valores: ");
        scanf("%d", valores[i]);
        soma += valores[i];
    }//for

    //exibicao
    printf("Soma dos valores do vetor: %d\n", soma);

    //desalocar a memoria
    free(valores);

    return 0;
}