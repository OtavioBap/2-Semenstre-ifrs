#include <stdio.h>
#include "operacoes.h"

void soma(float numero1, float numero2){
    printf("\nResultado: %.2f +  %.2f = %.2f\n", numero1, numero2, numero1 + numero2);
}

void subtracao(float numero1, float numero2){
    printf("\nResultado: %.2f -  %.2f = %.2f\n", numero1, numero2, numero1 - numero2);
}

void multiplicacao(float numero1, float numero2){
    printf("\nResultado: %.2f x  %.2f = %.2f\n", numero1, numero2, numero1 * numero2);
}

void divisao(float numero1, float numero2){
    if (numero1 == 0 || numero2 == 0){
        printf("\nResultado: Impossivel divisão por zero!\n");
    }else{
        printf("\nResultado: %.2f /  %.2f = %.2f\n", numero1, numero2, numero1 / numero2);
    }
}