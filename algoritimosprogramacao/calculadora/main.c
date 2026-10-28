#include <stdio.h>
#include "operacoes.h"

int main(){
    int opcao;
    float numero1, numero2;

    do{
        printf("========================================\n");
        printf("==============CALCULADORA===============\n");
        printf("========================================\n");
        printf("1-Soma.\n");
        printf("========================================\n");
        printf("2-Subtração.\n");
        printf("========================================\n");
        printf("3-Multiplicação\n");
        printf("========================================\n");
        printf("4-Divisão\n");
        printf("========================================\n");
        printf("5-Sair.\n");
        printf("========================================\n");

        printf("\nEscolha uma operação: ");
        scanf("%d", &opcao);
        if(opcao < 1 || opcao > 4){
        }else{
            printf("\nDigite o 1 número: ");
            scanf("%f", &numero1);
            printf("\nDigite o 2 número: ");
            scanf("%f", &numero2);
        }

        switch (opcao){
        case 1:
            soma(numero1, numero2);
            break;
        case 2:
            subtracao(numero1, numero2);
            break;
        case 3:
            multiplicacao(numero1, numero2);
            break;
        case 4:
            divisao(numero1, numero2);
            break;
        case 5:
            break;
        default:
            printf("\nOpção Invalida, Tente Novamente!\n");
            break;
        }
    } while(opcao != 5);
    
}