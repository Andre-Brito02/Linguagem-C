#include <stdio.h>
//André Brito

int main(){
    //criando um vetor do tipo int com inicialização
    int arr[] = {10,20,30,40,50};
    //alterando o valor da posição 2 do vetor para 100
    arr[2] = 100;
    //criando um vetor do tipo char com inicialização
    char arrs[] = {'G', 'e', 'e', 'k', 's', '\0'};//\0 indica o fim do vetor

    //exibindo os elementos do array
    printf("---Elementos do array imprimindo:---\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }//for

    printf("------------------------------------\n");

    //criando uma variavel para rodar os indices do vetor de char
    int y = 0;
    
    //exibindo os elementos do vetor de char
    while (arrs[y]){
        printf("%c\n", arrs[y++]);
    }

    printf("------------------------------------\n");
    
    return 0;
}//main