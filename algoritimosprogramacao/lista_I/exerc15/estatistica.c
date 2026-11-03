#include <stdio.h>
#include "estatistica.h"

float media(int v[], int tam) {
    if (tam <= 0){
        return 0;
    }
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma = soma + v[i];
    }
    return soma / tam;
}

int maior(int v[], int tam) {
    int maior = v[0];
    for (int i = 1; i < tam; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

int menor(int v[], int tam) {
    int menor = v[0];
    for (int i = 1; i < tam; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    return menor;
}

int contarAcima(int v[], int tam, float valor) {
    int quantidade = 0;
    for (int i = 0; i < tam; i++) {
        if (v[i] > valor) {
            quantidade++;
        }
    }
    return quantidade;
}

void ordenar(int v[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int ordenador = v[j];
                v[j] = v[j + 1];
                v[j + 1] = ordenador;
            }
        }
    }
}

void mostrarVetor(int v[], int tam) {
    printf("[ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}