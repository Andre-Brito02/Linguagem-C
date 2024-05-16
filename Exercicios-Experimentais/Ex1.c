#include <stdio.h>
#include <stdlib.h>

int main(){
    char origemC, destinoC;
    int origemN, destinoN;
    scanf("%c%d %c%d", &origemC, &origemN, &destinoC, &destinoN);

    if(abs((int)origemC - (int)destinoC) == 2 && abs(origemN - destinoN) == 1){
        printf("VALIDO\n");
    }

    else if(abs((int)origemC - (int)destinoC) == 1 && abs(origemN - destinoN) == 2){
        printf("VALIDO\n");
    }

    else{
        printf("INVALIDO\n");
    }

    return 0;
}