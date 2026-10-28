#include <stdio.h>

float aplicar_taxa(float preco){
    float conta;
    conta = preco * 1.15;

    printf("%f\n", conta);

    return conta;
}

int main(){
    
    float preco_base;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco_base);

    aplicar_taxa(preco_base);
    printf("%f", preco_base);

    return 0;
}