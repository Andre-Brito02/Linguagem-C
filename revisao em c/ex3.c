/*3. Faça um programa que calcule a área de um círculo recebendo o valor do seu raio. Área
do círculo = π * raio2*/
#include <stdio.h>
#define PI 3.14

int main(){
    int raio;
    float area_circulo;

    printf("Informe o valor do raio: ");
    scanf("%d", &raio);

    area_circulo = PI * raio * raio;

    printf("Area do circulo = %.2f\n", area_circulo);
}