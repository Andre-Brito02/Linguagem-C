#include <stdio.h>

int potencia(int base, int ep){
    if(ep == 1){
        return base;
    }
    return base * potencia(base, ep-1);
}

int main(){
    int v = potencia(2,4);

    printf("%d\n", v);
    return 0;
}