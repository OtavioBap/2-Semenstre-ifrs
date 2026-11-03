#include <stdio.h>
#include <string.h>
#include <ctype.h>

// O que faz: Conta a quantidade total de vogais em uma string (ignorando maiusculas/minusculas).
// O que recebe: A string constante frase[] (apenas para leitura).
// O que devolve: Um inteiro indicando o total de vogais encontradas.
int contarVogais(const char frase[]) {
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

// O que faz: Conta o numero de palavras em uma frase separadas por espacos, tabs ou quebras de linha.
// O que recebe: A string constante frase[] (apenas para leitura).
// O que devolve: Um inteiro com a quantidade total de palavras encontradas.
int contarPalavras(const char frase[]) {
    int palavras = 0;
    int emPalavra = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' || frase[i] == '\t' || frase[i] == '\n') {
            emPalavra = 0;
        } else if (emPalavra == 0) {
            emPalavra = 1;
            palavras++;
        }
    }
    return palavras;
}

// O que faz: Converte todas as letras minusculas de uma frase para maiusculas.
// O que recebe: A string modificavel frase[].
// O que devolve: Nada (void), altera a frase original na memoria.
void paraMaiusculas(char frase[]) {
    for (int i = 0; frase[i] != '\0'; i++) {
        frase[i] = toupper(frase[i]);
    }
}

// O que faz: Inverte a ordem de todos os caracteres de uma frase no proprio lugar.
// O que recebe: A string modificavel frase[].
// O que devolve: Nada (void), altera a ordem da frase original na memoria.
void inverter(char frase[]) {
    int tam = strlen(frase);
    int inicio = 0;
    int fim = tam - 1;

    while (inicio < fim) {
        char temp = frase[inicio];
        frase[inicio] = frase[fim];
        frase[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int tam = strlen(frase);
    if (tam > 0 && frase[tam - 1] == '\n') {
        frase[tam - 1] = '\0';
        tam--;
    }

    printf("\n---Resultados---\n");
    printf("Tamanho da frase (strlen): %d\n", tam);
    printf("Quantidade de vogais: %d\n", contarVogais(frase));
    printf("Quantidade de palavras: %d\n", contarPalavras(frase));

    paraMaiusculas(frase);
    printf("Frase em maiusculas: %s\n", frase);

    inverter(frase);
    printf("Frase invertida: %s\n", frase);

    return 0;
}

/*A palavra-chave const impede que as funções contarVogais e contarPalavras modifiquem o conteúdo da string original.
Em c, strings nada mais são do que vetores de caracteres (char[]). Quando passamos um vetor para uma função, 
o c não envia uma cópia da string, mas sim o endereço de memória onde a frase original está armazenada*/