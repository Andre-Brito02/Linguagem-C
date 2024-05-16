#include <stdio.h>
#include <stdlib.h>
//André Brito

int main() {
    //Criando os vetores que serão alocados
    int *valores, *maiores, *menores;
    //Criando a variável que recebera o tamanho do vetor
    int qtd;
    //Criando uma variável que recebera a média
    float media = 0;

    //pedir ao usuario digitar o tamanho do vetor
    printf("Digite a quantidade de valores do vetor: ");
    scanf("%d", &qtd);

    //Alocando memória para os vetores
    valores = malloc(qtd * sizeof(int));
    maiores = malloc(qtd * sizeof(int)); 
    menores = malloc(qtd * sizeof(int)); 

    //Se o valor for NULL deu errado a alocação
    if(valores == NULL || maiores == NULL || menores == NULL){
        printf("Erro de alocação de memória\n");
        return -1;
    }//if

    //pedir ao usuario digitar os valores do vetor, aumentando o valor de media apos o recebimento da nota
    for(int i = 0; i < qtd; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
        media += valores[i];
    }//for

    //Calculando a média
    media = media / qtd;
    //Criação de variáveis que rodam os vetores maiores e menores
    int x = 0, y = 0;

    //Verificação de valores maiores e menores, adicionando o valor em seu respectivo vetor
    for (int i = 0; i < qtd; i++) {
        if(valores[i] >= media){
            maiores[x] = valores[i];
            x++;
        }else{
            menores[y] = valores[i];
            y++;
        }//else
    }

    //Exibição da média e dos vetores maiores e menores
    printf("Média = %.2f\n", media);

    printf("Valores maiores ou iguais à média: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", maiores[i]);
    }
    printf("\n");

    printf("Valores menores que a média: ");
    for (int i = 0; i < y; i++) {
        printf("%d ", menores[i]);
    }
    printf("\n");

    //Liberação da memória alocada
    free(valores);
    free(maiores);
    free(menores);

    return 0;
}
