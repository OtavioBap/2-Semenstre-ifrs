#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define scan(msg, mascara, var) { printf(msg); scanf(mascara, &var); }

// O que faz: Imprime uma linha com 40 caracteres '=' e quebra a linha.
//O que recebe: Nada (void).
//O que devolve: Nada (void).
void linha(){
    printf("\n========================================");
}

// O que faz: Imprime o cabecalho formatado do relatorio incluindo o numero da pagina. 
//O que recebe: Os inteiros numero da pagina e total de paginas.
//O que devolve: Nada (void).
void cabecalho(int numero, int total){
    linha();
    printf("\nRElATORIO - pagina %d de %d", numero, total);
    linha();
}

// O que faz: Imprime o rodape formatado com indicação de fim de pagina.
//O que recebe: O inteiro numero da pagina. 
//O que devolve: Nada (void).
void rodape(int numero){
    linha();
    printf("\nFim da pagina %d", numero);
    linha();
}

int main() {
	setlocale(LC_ALL, "");
    for(int x = 1; x < 4; x++){
        cabecalho(x, 3);
        rodape(x);
    }
	return 0;
}

/*As três sub-rotinas são chamadas de processedimentos pois ela não devolvem nenhum valor, apenas executam uma ação. 
A função é obrigatória um retorno de parâmetro.*/