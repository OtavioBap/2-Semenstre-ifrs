#include <stdio.h>

#define N 4

int ehSimetrica(int m[][N], int ordem) {
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (m[i][j] != m[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int somaDiagonalPrincipal(int m[][N], int ordem) {
    int soma = 0;
    for (int i = 0; i < ordem; i++) {
        soma = soma + m[i][i];
    }
    return soma;
}

int somaDiagonalSecundaria(int m[][N], int ordem) {
    int soma = 0;
    for (int i = 0; i < ordem; i++) {
        soma = soma + m[i][ordem - 1 - i];
    }
    return soma;
}

void transposta(int m[][N], int t[][N], int ordem) {
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            t[j][i] = m[i][j];
        }
    }
}

int main() {
    int ordem = 3;
    int M[N][N] = {
        {1, 7, 3},
        {7, 4, 5},
        {3, 5, 6}
    };
    int T[N][N];

    printf("\n---Matriz Original (Ordem %d)---\n", ordem);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    printf("\n---Resultados dos Testes---\n");
    
    if (ehSimetrica(M, ordem)) {
        printf("A matriz E simetrica.\n");
    } else {
        printf("A matriz NAO e simetrica.\n");
    }

    printf("Soma da Diagonal Principal: %d\n", somaDiagonalPrincipal(M, ordem));
    printf("Soma da Diagonal Secundaria: %d\n", somaDiagonalSecundaria(M, ordem));

    transposta(M, T, ordem);
    printf("\n---Matriz Transposta---\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}