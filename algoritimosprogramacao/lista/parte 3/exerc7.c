#include <stdio.h>

// O que faz: Lê valores digitados pelo usuario e preenche o vetor.  
//O que recebe: O vetor de inteiros v[] e a quantidade de elementos tam.  
//O que devolve: Nada (void).
void lerVetor(int v[], int tam){
    for(int x = 1; x <= tam; x++){
        printf("Digite o %d vetor: ", x);
        scanf("%d", &v[x]);
    }
}

// O que faz: Exibe os elementos do vetor formatados entre colchetes. 
//O que recebe: O vetor de inteiros v[] e o seu tamanho tam. 
//O que devolve: Nada (void).
void mostrarVetor(int v[], int tam){
    for(int x = 1; x <= tam; x++){
        printf("%d Vetor: %d\n", x,  v[x]);
    }
}

// O que faz: Calcula e soma todos os elementos contidos no vetor.  
//O que recebe: O vetor de inteiros v[] e o seu tamanho tam. 
//O que devolve: Um inteiro com a soma total dos elementos.
int somaVetor(int v[], int tam){
    int soma = 0;
    for(int x = 1; x <= tam; x++){
        soma = soma + v[x];
    }
    return soma;
}

// O que faz: Calcula a media aritmetica dos elementos do vetor. 
//O que recebe: O vetor de inteiros v[] e o seu tamanho tam. 
//O que devolve: Um float com a media calculada.
float mediaVetor(int v[], int tam){
    return somaVetor(v, tam) / tam;
}

// O que faz: Encontra o maior elemento armazenado no vetor.  
//O que recebe: O vetor de inteiros v[] e o seu tamanho tam. 
//O que devolve: O maior valor inteiro encontrado.
int maiorVetor(int v[], int tam){
    int maior = v[1];
    for(int x = 1; x <= tam; x++){
        if(v[x] > maior){
        maior = v[x];
        }
    }  
    return maior;
}

// O que faz: Encontra o menor elemento armazenado no vetor. 
//O que recebe: O vetor de inteiros v[] e o seu tamanho tam.  
//O que devolve: O menor valor inteiro encontrado.
int menorVetor(int v[], int tam){
    int menor = v[1];
    for(int x = 1; x <= tam; x++){
        if(v[x] < menor){
        menor = v[x];
        }
    } 
    return menor;
}

int main(){
    int tamanho;
    int vetor[100];

    do{
    printf("\nInsira o total de Vetores (maximo 100): ");
    scanf("%d", &tamanho);
    if(tamanho <= 0 || tamanho > 100){
        printf("Tamanho Invalido.\n");
        }
    }while(tamanho <= 0 || tamanho > 100);

    printf("\n--- Leitura dos Dados ---\n");
    lerVetor(vetor, tamanho);

    printf("\n--- Exibicao do Vetor ---\n");
    mostrarVetor(vetor, tamanho);

    printf("\n--- Resultados Estatisticos ---\n");
    printf("Soma: %d\n", somaVetor(vetor, tamanho));
    printf("Media: %.2f\n", mediaVetor(vetor, tamanho));
    printf("Maior valor: %d\n", maiorVetor(vetor, tamanho));
    printf("Menor valor: %d\n", menorVetor(vetor, tamanho));

    return 0;
}

//É necessario passar sempre o tamanho para limitar o numero de loop do for deacordo com oque o usuario quiser