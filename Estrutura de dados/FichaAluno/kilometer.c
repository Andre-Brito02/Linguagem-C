#include <stdio.h>
#include <stdlib.h>

typedef int killometer;

int main(){
    killometer newyork, chicago, miami;

    newyork = 300;
    chicago = 500;
    miami = 1500;

    printf("New York: %2dkm\n", newyork);
    printf("Chicago: %4dkm\n", chicago);
    printf("Miami: %6dkm\n", miami);
}