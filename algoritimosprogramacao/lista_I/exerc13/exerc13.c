#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// O que faz: Mostra uma mensagem explicativa de como usar o programa no terminal.
// O que recebe: O nome do executavel do programa nomePrograma[] (argv[0]).
// O que devolve: Nada (void).
void mostrarUso(const char nomePrograma[]) {
    printf("Uso correto: %s <numero1> <operacao> <numero2>\n", nomePrograma);
    printf("Operacoes disponiveis: soma, sub, mult, div\n");
}

// O que faz: Soma dois numeros de ponto flutuante.
// O que recebe: Dois valores do tipo float (a e b).
// O que devolve: O resultado em float da soma de a + b.
float soma(float a, float b) {
    return a + b;
}

// O que faz: Subtrai o segundo numero do primeiro.
// O que recebe: Dois valores do tipo float (a e b).
// O que devolve: O resultado em float da subtracao de a - b.
float sub(float a, float b) {
    return a - b;
}

// O que faz: Multiplica dois numeros de ponto flutuante.
// O que recebe: Dois valores do tipo float (a e b).
// O que devolve: O resultado em float do produto de a * b.
float mult(float a, float b) {
    return a * b;
}

// O que faz: Realiza uma divisao verificando previamente se o divisor e zero.
// O que recebe: O dividendo a, o divisor b e o vetor resultado[] onde a resposta e salva.
// O que devolve: Retorna 1 se houver erro de divisao por zero ou 0 em caso de sucesso.
int div_segura(float a, float b, float resultado[]) {
    if (b == 0.0f) {
        return 1;
    }
    resultado[0] = a / b;
    return 0; 
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Erro: Numero incorreto de argumentos.\n");
        mostrarUso(argv[0]);
        return 1;
    }

    float num1 = atof(argv[1]);
    char *operacao = argv[2];
    float num2 = atof(argv[3]);
    float resultado[1];

    if (strcmp(operacao, "soma") == 0) {
        resultado[0] = soma(num1, num2);
        printf("%.2f + %.2f = %.2f\n", num1, num2, resultado[0]);
    } 
    else if (strcmp(operacao, "sub") == 0) {
        resultado[0] = sub(num1, num2);
        printf("%.2f - %.2f = %.2f\n", num1, num2, resultado[0]);
    } 
    else if (strcmp(operacao, "mult") == 0) {
        resultado[0] = mult(num1, num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, resultado[0]);
    } 
    else if (strcmp(operacao, "div") == 0) {
        if (div_segura(num1, num2, resultado) == 1) {
            printf("Erro: divisao por zero.\n");
            return 1;
        }
        printf("%.2f / %.2f = %.2f\n", num1, num2, resultado[0]);
    } 
    else {
        printf("Erro: Operacao '%s' invalida.\n", operacao);
        mostrarUso(argv[0]);
        return 1;
    }

    return 0;
}