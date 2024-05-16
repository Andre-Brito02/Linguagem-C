#include <stdio.h>
#include <stdlib.h>
//André Brito

int main(){
    //criacao do vetor que sera alocado dinamicamente
    int *v;
    //criacao das variaveis que receberao a quantidade de valores
    int n;
    
    //pedir ao usuario digitar a quantidade de valores
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    //alocar dinamicamente o tamanho do vetor
    v = malloc(n * sizeof(int));
    
    printf("-------------------------------------------\n");

    //pegar os valores do vetor pelo usuario
    printf("Inserção de valores\n");

    for(int i = 0; i < n; i++){
        printf("%d\n"), v[i];
    }//for

    return 0;

}//main