#include <stdio.h>
#include <string.h>

#define MAX 10

// Definição da struct que representa uma página da web
struct page {
    char address[30];
    int connectionType;
};

// Definição da struct que representa a pilha
struct Stack {
    struct page pages[MAX];
    int top;
};

// Função para inicializar a pilha
void initStack(struct Stack *s) {
    s->top = -1; // Inicializa o topo como -1, indicando que a pilha está vazia
}

// Função para verificar se a pilha está cheia
int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

// Função para verificar se a pilha está vazia
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Função para inserir (push) uma nova página na pilha
void push(struct Stack *s, struct page p) {
    if (isFull(s)) {
        printf("Pilha cheia! Não é possível inserir mais elementos.\n");
    } else {
        s->pages[++(s->top)] = p;
        printf("Página inserida na pilha: %s\n", p.address);
    }
}

// Função para remover (pop) uma página da pilha
struct page pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Pilha vazia! Não há elementos para remover.\n");
        struct page empty = {"", -1}; // Retorna uma página vazia se a pilha estiver vazia
        return empty;
    } else {
        return s->pages[(s->top)--];
    }
}

// Função para exibir os elementos da pilha
void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Pilha vazia!\n");
    } else {
        printf("Páginas na pilha:\n");
        for (int i = s->top; i >= 0; i--) {
            printf("Endereço: %s, Tipo de conexão: %d\n", s->pages[i].address, s->pages[i].connectionType);
        }
    }
}

// Função principal
int main() {
    struct Stack s;
    initStack(&s);

    // Exemplo de páginas para inserir na pilha
    struct page p1 = {"www.example.com", 1};
    struct page p2 = {"www.example.org", 2};
    struct page p3 = {"www.example.net", 3};

    // Inserindo páginas na pilha
    push(&s, p1);
    push(&s, p2);
    push(&s, p3);

    // Exibindo a pilha
    display(&s);

    // Removendo uma página da pilha
    struct page removedPage = pop(&s);
    printf("Página removida da pilha: %s\n", removedPage.address);

    // Exibindo a pilha após a remoção
    display(&s);

    return 0;
}
