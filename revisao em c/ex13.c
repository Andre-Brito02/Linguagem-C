/*13. Faça um programa que receba o valor de um carro e mostre uma tabela com os
seguintes dados: preço final, quantidade de parcela e valor de cada parcela. Considere o
seguinte:
1. O preço final para compra à vista tem um desconto de 5%.
2. A quantidade de parcelas pode ser: 12, 24, 48 ou 60.
3. Os percentuais de acréscimo no valor do veículo seguem a tabela a seguir.*/
#include <stdio.h>

int main(){
    int preco_carro;
    char ch = 37;
    float a_vista, parcela12, parcela24, parcela48, parcela60;

    printf("Informe o valor do carro: ");
    scanf("%d", &preco_carro);
    
    a_vista = preco_carro - (preco_carro * 0.05);
    parcela12 = preco_carro + (preco_carro * 0.12);
    parcela24 = preco_carro + (preco_carro * 0.24);
    parcela48 = preco_carro + (preco_carro * 0.48);
    parcela60 = preco_carro + (preco_carro * 0.60);

    printf("Quantidade de parcelas | Percentual de acrescimo sobre o preco final| Preco final com percentual de aumento\n");
    printf("\t%5d \t%30d %c \t%35.1f\n", 0, 0, ch, a_vista);
    printf("\t%5d \t%30d %c \t%35.1f\n", 12, 6, ch, parcela12);
    printf("\t%5d \t%30d %c \t%35.1f\n", 24, 12, ch, parcela24);
    printf("\t%5d \t%30d %c \t%35.1f\n", 48, 24, ch, parcela48);
    printf("\t%5d \t%30d %c \t%35.1f\n", 60, 30, ch, parcela60);

}