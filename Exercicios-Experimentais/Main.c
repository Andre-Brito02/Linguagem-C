//Inclusão das Bibliotecas básicas da linguagem C
#include <stdio.h>
#include <stdlib.h>

//Inclusão da biblioteca time.h para utilizar as ferramentas de benchmark 
#include <time.h>

//Inclusão da biblioteca locale.h para deixar o código e medições no padrão da língua portugues
#include <locale.h>

//Definindo o número das interações e o tamanho do arquivo em bytes
#define NUM_ITERACOES 10000
#define TAMANHO_ARQUIVO 1000

// Função para realizar a tarefa de benchmark
void benchmark() {
	
	//Define a Locale para Português, padronizando ao nosso idioma
	setlocale(LC_ALL, "Portuguese");
	
	//Inserção de Printf para deixar a interface mais explicativa, e com um design mais confortável ao usuário
	printf("-----------------------------------------------------------------------------\n");
	printf("\n");
	printf("     Iniciando o teste de Benchmark de desempenho geral do sistema       \n");
	printf("    Nosso teste é voltado para eficiência da manipulação de arquivos       \n");
	printf("\n");
	printf("Esta operação pode demorar alguns segundos, por favor aguarde...\n");
	printf("\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("\n");
	printf("Para melhor execução do teste\n -Feche todos os aplicativos\n -Execute apenas o aplicativo do teste\n\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("\n");
	
	
	//Inicia a função clock para contagem do tempo de execução do Benchmark
    clock_t inicio, fim;
    
    //Inserção da váriavel que armazena o tempo total a ser executado
    double tempo_total;

    // Medir o tempo de execução da tarefa
    inicio = clock();

	//Inicia a execução do teste de Benchmark, de acordo com o número de interações definidas previamente
    for (int i = 0; i < NUM_ITERACOES; i++) {
    	
        // Cria o arquivo
        FILE *arquivo = fopen("temp.txt", "w");
        
        //if para alerta de erro, caso a operação falhe
        if (arquivo == NULL) {
        	
            fprintf(stderr, "Erro ao criar o arquivo\n");
            exit(1);
            
        }
        
        // Escrever a palavra "Teste" no arquivo criado
        fputs("Teste", arquivo);
        
        // Fecha o arquivo
        fclose(arquivo);
        
        //Abre e faz a leitura do arquivo, além da criação da char buffer para armazenar temporariamente os dados lidos
        char buffer[TAMANHO_ARQUIVO];
        arquivo = fopen("temp.txt", "r");
        
        //novamente if para alertar falha da operação
        if (arquivo == NULL) {
        	
            fprintf(stderr, "Erro ao abrir o arquivo\n");
            exit(1);
            
        }
        
        //função fgets para ler armazenar o valor do arquivo e fclose para fechar o arquivo
        fgets(buffer, TAMANHO_ARQUIVO, arquivo);
        fclose(arquivo);

        //Remove o arquivo anteriormente criado
        remove("temp.txt");
        
    }

	//função para fechar o clock e parar de contar o tempo de execução do teste
    fim = clock();
    
    //variável para armazenar o tempo total contado pelo clock
    tempo_total = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo total: %.6f segundos\n", tempo_total);
	
    //Calcula a nota baseada no tempo
    //Inserção da váriavel que calcula a média de tempo para avaliar em nota
    double tempo_medio = tempo_total / NUM_ITERACOES;
    
    //Classifica a nota de acordo com o tempo médio em uma escala de 100.0 para ser avaliada de 0 - 10
    int nota = (int)(10.0 - (tempo_medio * 100.0));
    
    //If para deixar o valor da nota como 0, já que o número mínimo de nota é 0
    if (nota < 0) {
    	
        nota = 0;
        
    }
    
	//Inserção da nota da máquina julgada acima
    printf("Sua máquina é nota %d\n", nota);
    printf("\n");
    printf("-----------------------------------------------------------------------------\n");
    
    //Finalização da Função de Teste do Benchmark
}

//Função principal de execução, feita para puxar a função que executa o Benchmark
int main() {
	
    benchmark();
    return 0;
    
    //Finalização da função principal
}