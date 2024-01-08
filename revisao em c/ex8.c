/*8. Faça um programa que receba dois números inteiros e mostre o maior deles.*/
#include <stdio.h>

int main(){
    int numA, numB;

    printf("Informe um numero: ");
    scanf("%d", &numA);
    printf("Informe outro numero: ");
    scanf("%d", &numB);

    if(numA > numB){
        printf("O maior numero eh o %d\n", numA);
    }else{
        printf("O maior numero eh o %d\n", numB);
    }
}