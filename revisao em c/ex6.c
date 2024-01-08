/*6. Faça um programa que receba um número inteiro e verifique se esse número é par ou
ímpar.*/
#include <stdio.h>

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num %2 == 0){
        printf("O numero %d eh par\n", num);
    }else{
        printf("O numero %d eh impar\n", num);
    }
}