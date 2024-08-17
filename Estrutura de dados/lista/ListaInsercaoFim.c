#include <stdio.h>
#include <stdlib.h>

//Cria uma struct
struct ponto{
    float x;//valor
    float y;//valor
    struct ponto *prox;//Cria um ponteiro do tipo struct que aponta para o próximo elemento da lista
};

typedef struct ponto Ponto;//Cria um "objeto", facilitando o uso da struct por todo o código

Ponto *listaPontos;//aponta para o inicia da lista

//Função criada para adicionar elementos no começo da lista
void addFirst(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));//Cria um ponto p e aloca memória
    p->x = x;//Atribui valor
    p->y = y;//Atribui valor
    p->prox = listaPontos;//Valor de prox passa a apontar para onde listaPontos aponta
    /*
    Se for o primeiro elemento da lista p->prox aponta para NULL
    Caso contrário p->prox aponta para o último elemento criado
    */
    listaPontos = p;//Passa a apontar para o ponto criado
}

//Função criada para adicionar elementos no fim da lista
void addLast(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));//Cria um ponto p e aloca memória
    p->x = x;//Atribui valor
    p->y = y;//Atribui valor
    p->prox = NULL;//Valor de prox passa a apontar para NULL, indicando o fim da lista

    if(listaPontos == NULL){//Se o valor de listaPontos for NULL, indica que a lista não tem elementos
        listaPontos = p;
    }else{//Caso tenha elementos na lista
        Ponto *listaAux = listaPontos;//Cria um ponteiro auxiliar que aponta para onde listaPontos aponta, NORMALMENTE O PRIMEIRO ELEMENTO DA LISTA
        while(listaAux->prox != NULL){//Roda o loop até encontrar o valor de prox que aponta para NULL
            listaAux = listaAux->prox;
        }
        listaAux->prox = p;//Quando sai do loop, o valor de prox do ponteiro auxiliar passa a apontar para o ultimo elemento criado 
    }
}

//Função criada para imprimir a lista usando recursão
void imprime(Ponto *p){
  if(p != NULL){
    printf("Ponto(%.f,%.f)\n", p->x, p->y);
    imprime(p->prox);
  }
}

int main() {
    addFirst(1,5);
    addFirst(2,7);
    addFirst(5,3);

    addLast(1,1);
    addLast(8,8);

    Ponto *auxLista = listaPontos;
    imprime(auxLista);

    return 0;
}
