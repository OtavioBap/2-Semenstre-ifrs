#include <stdio.h>

#define LIN 3
#define COL 4

// O que faz: Exibe a matriz formatada em linhas e colunas com tabulacao.
// O que recebe: A matriz de inteiros m[][COL] e a quantidade de linhas.
// O que devolve: Nada (void).
void mostrarMatriz(int m[][COL], int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

// O que faz: Soma elemento por elemento das matrizes A e B e guarda o resultado em C.
// O que recebe: Duas matrizes de entrada a[][COL] e b[][COL], a matriz de destino c[][COL] e a quantidade de linhas.
// O que devolve: Nada (void), grava os resultados na matriz c.
void somarMatrizes(int a[][COL], int b[][COL], int c[][COL], int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < COL; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// O que faz: Calcula a soma de todos os elementos contidos em uma linha especifica.
// O que recebe: A matriz m[][COL] e o indice da linha desejada.
// O que devolve: Um inteiro representando o total somado daquela linha.
int somaLinha(int m[][COL], int linha) {
    int soma = 0;
    for (int j = 0; j < COL; j++) {
        soma = soma + m[linha][j];
    }
    return soma;
}

// O que faz: Calcula a soma de todos os elementos contidos em uma coluna especifica.
// O que recebe: A matriz m[][COL], a quantidade de linhas e o indice da coluna desejada.
// O que devolve: Um inteiro representando o total somado daquela coluna.
int somaColuna(int m[][COL], int linhas, int coluna) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        soma = soma + m[i][coluna];
    }
    return soma;
}

int main() {
    int A[LIN][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int B[LIN][COL] = {
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };

    int C[LIN][COL];

    somarMatrizes(A, B, C, LIN);

    printf("---Matriz A---\n");
    mostrarMatriz(A, LIN);

    printf("\n---Matriz B---\n");
    mostrarMatriz(B, LIN);

    printf("\n---Matriz C---\n");
    mostrarMatriz(C, LIN);

    printf("\n---Soma das Linhas da Matriz C---\n");
    for (int x = 0; x < LIN; x++) {
        printf("Soma da linha %d: %d\n", x + 1, somaLinha(C, x));
    }

    printf("\n---Soma das Colunas da Matriz C---\n");
    for (int x = 0; x < COL; x++) {
        printf("Soma da coluna %d: %d\n", x + 1, somaColuna(C, LIN, x));
    }

    return 0;
}

/*O número de colunas (COL) é obrigatório porque indica quantos elementos existem em cada linha.*/