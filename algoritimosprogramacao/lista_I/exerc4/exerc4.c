#include <stdio.h>

int totalvendas = 0;
float valoracumulado = 0;

void registrarvenda(float valor){
    totalvendas++;
    valoracumulado = valoracumulado + valor;

    float comissao = valor * 0.05;
    comissao = comissao + valor;
    printf("Valor total da venda: %.2f\n", comissao);
}

void relatorio(void){
    printf("\n==========Relatorio==========");
    printf("\n=============================");
    printf("\nToltal de vendas: %d", totalvendas);
    printf("\n=============================");
    printf("\nValor acumulado: %.2f", valoracumulado);
    printf("\n=============================");
    if (totalvendas > 0) {
        printf("\nTicket Médio: R$ %.2f", valoracumulado / totalvendas);
    } else {
        printf("\nTicket Médio: R$ 0.00");
    }
    printf("\n=============================");
}

int main (){
    float valor = 1;
    while(valor >= 1){
        printf("\nInsira o valor do produto: ");
        scanf("%f", &valor);

        if(valor == 0){
            break;
        }else if(valor < 0){
            printf("Valor invalido! Tente novamente.\n");
            valor = 1;
        }else{
            registrarvenda(valor);
        }
    }
    relatorio();

    return 0;
}