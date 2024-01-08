#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void apresentacaoJogo(){
    // imprime o cabecalho do nosso jogo
    printf("|---------------------------------------------------------------------------|\n");
    printf("| Bem vindo ao nosso jogo!                                                  |\n");
    printf("| Seu objetivo eh acertar o numero secreto na menor quantidade de tentativas|\n");
    printf("| Escolha o nivel que deseja jogar e boa sorte!                             |\n");
    printf("|---------------------------------------------------------------------------|\n");
    printf("\n");
}

void escolheNivel(int* numerotentativas){
    //cria a variavel para escolher o nivel e escolhe logo em seguida
    int nivel;
    printf("Em qual nivel de dificuldade voce gostaria de jogar?\n");
    printf("1 - Facil   - 20 tentativas\n2 - Medio   - 15 tentativas\n3 - Dificil -  6 tentativas\n");
    printf("Escolha a dificuldade: ");
    scanf("%d", &nivel);
    printf("\n");
    
    switch (nivel){
        case 1:
            printf("Voce escolheu o nivel facil\n");
            *numerotentativas = 20;
            break;
    
        case 2:
            printf("Voce escolheu o nivel medio\n");
            *numerotentativas = 15;
            break;

        case 3:
            printf("Voce escolheu o nivel dificil\n");
            *numerotentativas = 6;  
            break;
    }
}

int main(){          
    
    apresentacaoJogo();

    //necessario para mudar o numero randomizado todo jogo
    int segundos = time(0);
    srand(segundos);
    //gerar um numero aleatorio
    int numerogrande = rand();   
    //calcula para que o numero aleatorio fique entre o intervalo 0 a 99
    int numerosecreto = numerogrande % 100;
    //criar as variaveis necessarias para o funcionamento do jogo
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    int numerotentativas;
    
    escolheNivel(&numerotentativas);

    //laço de repetição para o jogo
    for(int i = 1; i <= numerotentativas; i++){
        //mostra a tentativa que o usuario esta e pede para ele digitar o numero
        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);
        //variaveis criadas para uma melhor interface condicional para o if else
        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        //verifica se o chute foi dentro do intervalo permitido
        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            printf("\n");
            continue;
        }//if

        //verifica se o chute foi acertado, maior ou menor que o numero gerado
        else if(acertou){
            break;
        }//if
        
        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n");
        }//else if

        else{
            printf("Seu chute foi menor que o numero secreto\n");
        }//else 
        tentativas++;//aumenta ao final de cada tentativa    
        //calcula os pontos
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
        printf("\n");
    }//for

    //exibe as mensagens de vitoria ou derrota, dependendo de como o usuario se saiu
    if(acertou){
        printf("\n");
        
        printf("|------------|\n");
        printf("|Fim de jogo!|\n");
        printf("|------------|\n");

        printf("\n");

        printf("|----------------------------------|\n");
        printf("|Voce acertou em %d tentativas     |\n", tentativas);
        printf("|----------------------------------|\n");
        printf("\n");
        printf("|------------------------|\n");
        printf("| Total de pontos: %.1f |\n", pontos);
        printf("|------------------------|\n");
    }else{
        printf("\n");

        printf("O numero secreto era: %d\n", numerosecreto);
        printf("|-----------------------------------------------------------------------------|\n");
        printf("|Alguns dias acordamos e tudo que tentamos fazer da errado, mas nao desanime. |\n");
        printf("|Levante-se e tente novamente.                                                |\n");
        printf("|Lembre-se: o verdadeiro derrotado eh aquele que desiste logo apos perder.    |\n");
        printf("|Boa sorte na proxima tentativa!                                              |\n");
        printf("|-----------------------------------------------------------------------------|\n");

    }//else   
    
}//main