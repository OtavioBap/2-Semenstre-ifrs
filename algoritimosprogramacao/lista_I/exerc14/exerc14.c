#include <stdio.h>

int ehPrimo(int n);
int primosAte(int limite, int v[]);
void mostrarVetor(const int v[], int tam);
int proximoPrimo(int n);

int main() {
    int limite;
    int vetorPrimos[1000];
    
    printf("Digite o limite para encontrar numeros primos: ");
    scanf("%d", &limite);

    if (limite < 2) {
        printf("Nao existem numeros primos ate %d.\n", limite);
        return 0;
    }

    int quantidade = primosAte(limite, vetorPrimos);

    printf("\nPrimos encontrados ate %d (Total: %d):\n", limite, quantidade);
    mostrarVetor(vetorPrimos, quantidade);

    int proximo = proximoPrimo(limite);
    printf("\nO primeiro primo maior que %d e: %d\n", limite, proximo);

    return 0;
}

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int primosAte(int limite, int v[]) {
    int qtd = 0;
    for (int i = 2; i <= limite; i++) {
        if (ehPrimo(i)) {
            v[qtd] = i;
            qtd++;
        }
    }
    return qtd;
}

void mostrarVetor(const int v[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d\t", v[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    if (tam % 10 != 0) {
        printf("\n");
    }
}

int proximoPrimo(int n) {
    int candidato = n + 1;
    while (!ehPrimo(candidato)) {
        candidato++;
    }
    return candidato;
}