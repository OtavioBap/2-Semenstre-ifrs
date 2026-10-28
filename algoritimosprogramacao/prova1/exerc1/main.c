#include <stdio.h>

//faz a media das temperaturas divedindo pelo tamanho
//Recebe o valor da temperatura e o seu tamanho
//retorna a divisão
float calcularmedia(float temperaturas[], int tamanho) {
    float soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma = soma + temperaturas[i];
    }
    return  soma / tamanho;
}

//adicionar um valor a mais nas temperaturas
//recebe as temperaturas, seu tamanho e o valor de ajuste
//retorna nada
void corrigirTemperaturas(float temperaturas[], int tamanho, float ajuste){
    for(int x = 0; x < tamanho; x++){
        temperaturas[x] = temperaturas[x] + ajuste;
    }
}

int main(){
    float temp[7];
    int tamanho = 7;
    float ajuste = 0;

    for(int j = 0; j < tamanho; j++){
        printf("\nInsira o valor da %d temperatura: ", j + 1);
        scanf("%f", &temp[j]);
    }

    printf("Resultado da média: %.2f\n", calcularmedia(temp, tamanho));

    printf("\nInsira o valor de ajuste: ");
    scanf("%f", &ajuste);
    corrigirTemperaturas(temp, tamanho, ajuste);
    printf("Resultado da nova média: %.2f ", calcularmedia(temp, tamanho));

    return 0;
}