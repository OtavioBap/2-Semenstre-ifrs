#include <stdio.h>

void dobrarValores(int v[], int tam){
    for(int x = 0; x < tam; x++){
        v[x] = v[x] * 2;
    }
}

void ordenar(int v[], int tam){
    int ordenador;
    for(int x = 0; x < tam; x++){
        for(int i = 0; i < tam - 1; i++){
            if(v[i] > v[i + 1]){
                ordenador = v[i];
                v[i] = v[i + 1];
                v[i + 1] = ordenador;
            }
        }
    }
}

int buscar(int v[], int tam, int alvo){
    for(int x = 0; x < tam; x++){
        if(v[x] == alvo){
            return x;
        }
    }
    return -1;
}

int main(){
    int vetor[] = {7,3,9,1,5,8,2};
    int alvo;

    printf("\n---Vetor Original---\n");
    printf("Vetores = ");
    for(int x = 0; x < 7; x++){
        printf("%d, ", vetor[x]);
    }

    printf("\n---Vetor Dobrado--\n");
    printf("Vetores = ");
    dobrarValores(vetor, 7);
    for(int x = 0; x < 7; x++){
        printf("%d, ", vetor[x]);
    };

    printf("\n---Vetor Organizado---\n");
    printf("Vetores = ");
    ordenar(vetor, 7);
    for(int x = 0; x < 7; x++){
        printf("%d, ", vetor[x]);
    }

    printf("\n\nInsira um número do vetor: ");
    scanf("%d", &alvo);
    printf("O Indice do número é %d", buscar(vetor, 7, alvo));
}

/*Diferente do exercício 6 a variavel vetor mudou porque em C os vetores são sempre passados por referência 
através de ponteiros para o primeiro elemento, enquanto variáveis simples, como preco, são passadas por valor.*/