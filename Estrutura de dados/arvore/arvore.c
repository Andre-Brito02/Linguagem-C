#include <stdio.h>
#include <stdlib.h>
//Aluno André Brito

typedef struct no{
    int conteudo;
    struct no *esquerda, *direita;
}No;

typedef struct ArvB{
    No *raiz;
}ArvB;

void inserirDireita(No *no, int valor);//Declaração apenas para evitar erro, já que a função inserirDireita é usada na função inserirEsquerda mesmo sua criação seja feita depois

void inserirEsquerda(No *no, int valor){
    if(no->esquerda == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->esquerda = novo;
    }else{
        if(valor < no->esquerda->conteudo){
            inserirEsquerda(no->esquerda, valor);
        }else{
            if(valor > no->esquerda->conteudo){
                inserirDireita(no->esquerda, valor);
            }
        }
    }
}//inserir Esquerda

void inserirDireita(No *no, int valor){
    if(no->direita == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->direita = novo;
    }else{
        if(valor > no->direita->conteudo){
            inserirDireita(no->direita, valor);
        }else{
            if(valor < no->direita->conteudo){
                inserirEsquerda(no->direita, valor);
            }
        }
    }
}//inserir Direita

void inserir(ArvB *arv, int valor){
    if(arv->raiz == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        arv->raiz = novo;
    }else{
        if(valor < arv->raiz->conteudo){
            inserirEsquerda(arv->raiz, valor);
        }else{
            inserirDireita(arv->raiz, valor);
        }
    }
}//Inserir

void imprimir(No *raiz){
    if(raiz != NULL){
        imprimir(raiz->esquerda);
        printf("%d\n", raiz->conteudo);
        imprimir(raiz->direita);
    }
}//Imprimir em ordem

void imprimirPreOrdem(No *raiz) {
    if(raiz != NULL) {
        printf("%d\n", raiz->conteudo); 
        imprimirPreOrdem(raiz->esquerda); 
        imprimirPreOrdem(raiz->direita); 
    }
}//imprimir pre ordem

void imprimirPosOrdem(No *raiz) {
    if(raiz != NULL) {
        imprimirPosOrdem(raiz->esquerda); 
        imprimirPosOrdem(raiz->direita);   
        printf("%d\n", raiz->conteudo); 
    }
}//imprimir pos ordem

int main(){
    ArvB arv;
    arv.raiz = NULL;

    int op, valor;
    int contagemPares = 0;

    do{
        printf("Menu de opções: \n");
        printf("0 - Sair\n1 - Inserir\n2 - Imprimir (em ordem)\n3 - Imprimir (pré-ordem)\n4 - Imprimir (pós-ordem)\n");
        printf("Digite uma opção: ");
        scanf("%d", &op);
        switch(op){
            case 0:
                printf("\nTerminando a execução\n");
                printf("Você inseriu %d número(s) par(es).\n", contagemPares);
                break;
            case 1:
                printf("\nDigite um valor: ");
                scanf("%d", &valor);
                printf("\n");
                inserir(&arv, valor);
                if (valor % 2 == 0) {
                    contagemPares++;
                }
                break;
            case 2:
                printf("\n====== Impressão ======\n");
                imprimir(arv.raiz);
                printf("\n");
                break;
            case 3:
                printf("\n====== Impressão (pré-ordem) ======\n");
                imprimirPreOrdem(arv.raiz);
                printf("\n");
                break;
            case 4:
                printf("\n====== Impressão (pós-ordem) ======\n");
                imprimirPosOrdem(arv.raiz);
                printf("\n");
                break;
        }//Switch
    }while(op != 0);
}//Main