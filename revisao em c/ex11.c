/*11. Faça um programa que verifique e mostre os números entre 1.000 e 2.000 (inclusive) que
são divisíveis por 7.*/
#include <stdio.h>

int main(){
    for(int i = 1000; i <= 2000; i++){
        if(i %7 == 0){
            printf("%d\n", i);
        }
    }
}