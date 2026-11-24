#include <stdio.h>

typedef struct conta Conta;
struct conta{
    char titulo[30];
    float saldo;
    int mesesAplicados;
};


void aplicarJuros(Conta *c, float taxa){
    c->saldo += c->saldo * taxa;
    c->mesesAplicados++;
}

int main(){
    Conta c;
    c.mesesAplicados = 0;
    float taxa = 0;

    printf("Insira o titular da conta: ");
    scanf(" %[^\n]", c.titulo);
    printf("Insira o Saldo na conta: ");
    scanf("%f", &c.saldo);
    printf("Insira a taxa desejada: ");
    scanf("%f", &taxa);
    taxa = taxa / 100;

    aplicarJuros(&c, taxa);

    printf("\nApós %d mês teremos:", c.mesesAplicados);
    printf("\nTitular: %s", c.titulo);
    printf("\nSaldo: %.2f", c.saldo);

    return 0;
}