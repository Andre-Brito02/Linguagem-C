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
int length = 0;

void addIndex(float x, float y, int index){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;

    if(index > length){
        printf("Posição inválida\n");
    }else{
        if(index == 0){
            p->prox = listaPontos;
            listaPontos = p;
        }else{
            Ponto *listaAux = listaPontos;
            int i = 0;
            while(i != index-1){
                listaAux = listaAux->prox;
                i++;
            }
            p->prox = listaAux->prox;
            listaAux->prox = p;
        }
        length++;
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
    addIndex(1,1,0);
    addIndex(2,4,1);
    addIndex(4,16,2);
    addIndex(3,9,2);
    addIndex(0,0,0);
    
    Ponto *auxLista = listaPontos;
    imprime(auxLista);

    return 0;
}
