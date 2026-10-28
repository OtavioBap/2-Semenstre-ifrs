#include <stdio.h>

struct aluno{
    char nome[50];
    float nota1, nota2;
};

int main(){
    float media;
     struct aluno alunoads;

    //strcpy(alunoads.nome, "joao");
    printf("Digite o nome do aluno: ");
    scanf("%s", alunoads.nome);

    printf("Digite a 1 nota do aluno: ");
    scanf("%f", &alunoads.nota1);

    printf("Digite a 2 nota do aluno: ");
    scanf("%f", &alunoads.nota2);

    media = (alunoads.nota1 + alunoads.nota2) / 2;

    printf("\naluno: %s", alunoads.nome);
    printf("\nNota1: %.2f", alunoads.nota1);
    printf("\nNota2: %.2f", alunoads.nota2);
    printf("\nMédia: %.2f", media);

    return 0;
}