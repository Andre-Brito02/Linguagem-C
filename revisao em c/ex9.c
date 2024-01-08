/*9. Faça um programa que receba o preço de um produto e o seu código de origem e mostre
sua procedência.*/
#include <stdio.h>

int main(){
    float preco;
    int codigo;

    printf("Digite o preco de um produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            printf("Norte\n");
            break;
        case 2:
            printf("Nordeste\n");
            break;
        case 3:
            printf("Sudeste\n");
            break;
        case 4:
            printf("Sul\n");
            break;
        case 5:
            printf("Centro-Oeste\n");
            break;
        default:
            break;
    }//switch
}