#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos = NULL;

void addLast(float x, float y) {
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    p->prox = NULL;

    if (listaPontos == NULL) {
        listaPontos = p;
    } else {
        Ponto *listaAux = listaPontos;
        while (listaAux->prox != NULL) {
            listaAux = listaAux->prox;
        }
        listaAux->prox = p;
    }
}

void removePonto(float x, float y) {
    Ponto *atual = listaPontos;
    Ponto *anterior = NULL;

    while (atual != NULL) {
        if (atual->x == x && atual->y == y) {
            if (anterior == NULL) {
                listaPontos = atual->prox;
            } else {
                anterior->prox = atual->prox;
            }
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->prox;
    }
}

void imprime() {
    Ponto *auxLista = listaPontos;
    while (auxLista != NULL) {
        printf("Ponto(%.1f, %.1f)\n", auxLista->x, auxLista->y);
        auxLista = auxLista->prox;
    }
}

int main() {
    addLast(1, 5);
    addLast(2, 7);
    addLast(5, 3);
  
    printf("Lista antes da remoção:\n");
    imprime();
  
    removePonto(2, 7);
  
    printf("Lista após a remoção:\n");
    imprime();
  
    return 0;
}
