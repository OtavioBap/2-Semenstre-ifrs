#include <stdio.h>
#include "estatistica.h"

int main() {
    int notas[MAX_NOTAS];
    int tamanho = 0;
    int opcao;

    do{
    printf("\nQuantas notas deseja inserir? ", MAX_NOTAS);
    scanf("%d", &tamanho);
    if(tamanho <= 0 || tamanho > 50){
        printf("Quantidade invalida.\n");
        }
    }while(tamanho <= 0 || tamanho > 50);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    do {
        printf("\n-----Menu-----\n");
        printf("1. Mostrar notas\n");
        printf("2. Calcular media\n");
        printf("3. Maior e menor nota\n");
        printf("4. Quantas notas acima da media\n");
        printf("5. Ordenar notas\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nNotas: ");
                mostrarVetor(notas, tamanho);
                break;
            case 2:
                printf("\nMedia das notas: %.2f\n", media(notas, tamanho));
                break;
            case 3:
                printf("\nMaior nota: %d\n", maior(notas, tamanho));
                printf("Menor nota: %d\n", menor(notas, tamanho));
                break;
            case 4: {
                float med = media(notas, tamanho);
                int qtd = contarAcima(notas, tamanho, med);
                printf("\nMedia atual: %.2f\n", med);
                printf("Notas acima da media: %d\n", qtd);
                break;
            }
            case 5:
                ordenar(notas, tamanho);
                printf("\nNotas ordenadas com sucesso!\n");
                mostrarVetor(notas, tamanho);
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

/*Arquivos cabeçalho .h contêm apenas declarações protótipos de funções, definições de tipos e macros, e não código executável.*/