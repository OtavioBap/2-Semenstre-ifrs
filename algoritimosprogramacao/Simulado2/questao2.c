#include <stdio.h>

typedef struct livro Livro;
struct livro {
    char titulo[50];
    char autor[50];
    int anopublicado;
};

int main(){
    Livro l[20];
    int n = 0;

    printf("\nInsira a quantidade de livros que deseja cadastrar (Máximo 20): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nInsira o Titulo do livro: ");
        scanf(" %[^\n]", l[i].titulo);

        printf("Insira o autor do livro: ");
        scanf(" %[^\n]", l[i].autor);

        printf("Insira o ano de publicacao do livro: ");
        scanf("%d", &l[i].anopublicado);
    }

    for(int x = 0; x < n; x++){
        printf("\n%d# Livro\n", x + 1);
        printf("Titulo: %s\n", l[x].titulo);
        printf("Autor: %s\n", l[x].autor);
        printf("Ano Publicado: %d\n", l[x].anopublicado);
    }


    return 0;
}