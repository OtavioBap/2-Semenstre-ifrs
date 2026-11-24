#include <stdio.h>

void calcularSomaEDiferenca(int a, int b, int *soma, int *difenreca){
    *soma = a + b;
    *difenreca = a - b;
}

int main (){
    int a = 0, b = 0;
    int soma = 0, diferenca = 0;

    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);

    calcularSomaEDiferenca(a, b, &soma, &diferenca);

    printf("\nSoma: %d + %d = %d ", a, b, soma);
    printf("\nDiferenca: %d - %d = %d", a, b, diferenca);

    return 0;
}