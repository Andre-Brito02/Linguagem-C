/*4. João comprou um saco de ração com peso em quilos. João possui dois gatos para os
quais fornece a quantidade de rações em gramas. Faça um programa que receba o peso do
saco de ração comprado por João e a quantidade de ração fornecida para cada gato.
Calcule e mostre quanto restará de ração no saco após 3 dias.*/
#include <stdio.h>

int main(){
    float saco_racao;
    long int saco_racao_gramas;
    int quantidade_racao;
    int dias = 1;

    printf("Informe o peso do saco de racao: ");
    scanf("%f", &saco_racao);
    printf("Informe a quantidade de racao para um gato: ");
    scanf("%d", &quantidade_racao);
    
    saco_racao_gramas = saco_racao * 1000;
    quantidade_racao *= 2;

    while(dias <= 3){
        saco_racao_gramas -= quantidade_racao;
        dias++;
    }

    printf("Sobrara %d de racao apos 3 dias\n", saco_racao_gramas);
}