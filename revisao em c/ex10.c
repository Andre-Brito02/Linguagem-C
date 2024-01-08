/*10. Faça um programa que leia 10 valores e mostre-os na ordem lida.*/
#include <stdio.h>

int main(){
    int valores[10];

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", valores[i]);
    }

}