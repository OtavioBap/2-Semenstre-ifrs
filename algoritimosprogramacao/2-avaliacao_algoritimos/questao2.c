#include <stdio.h>

typedef struct animal Animal;
struct animal {
    char nome[50];
    float peso;
    float altura;
};

int main(){
    Animal rebanho[25];
    int n = 0;

    printf("Insira quantos animais terão no rebanho (máximo 25): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nInsira o nome do %d animal: ", i + 1);
        scanf(" %[^\n]", rebanho[i].nome);
        printf("Insira o peso do %d animal: ", i + 1);
        scanf("%f", &rebanho[i].peso);
        printf("Insira a altura do %d animal: ", i + 1);
        scanf("%f", &rebanho[i].altura);
    }

    Animal *p = rebanho;
    for(p = rebanho; p < rebanho + n; p++){
        printf("\nLista do rebanho:");
        printf("\nNome: %s", p->nome);
        printf("\nPeso: %.2f", p->peso);
        printf("\nAltura: %.2f", p->altura);
    }

    return 0;
}