#include <stdio.h>

typedef struct produto Produto;
struct produto{
    char nome[30];
    float preco;
    int estoque;
};

void aplicarDesconto(Produto *p, float percentual){
    p->preco += p->preco * percentual;
}

int main(){
    Produto p;
    float taxa = 0;

    printf("\nInsira o nome do produto: ");
    scanf(" %[^\n]", p.nome);
    printf("Insira o preco do produto: ");
    scanf("%f", &p.preco);
    printf("Insira o quantida no estoque do produto: ");
    scanf("%d", &p.estoque);
    printf("Insira o percentual de desconto: ");
    scanf("%f", &taxa);
    taxa = taxa / 100;

    aplicarDesconto(&p, taxa);

    printf("\nProduto Atualizado:");
    printf("\nNome: %s", p.nome);
    printf("\nPreco: %.2f", p.preco);
    printf("\nEstoque: %d", p.estoque);

    return 0;
}