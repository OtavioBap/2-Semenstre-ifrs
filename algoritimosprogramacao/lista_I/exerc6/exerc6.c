#include <stdio.h>

float aplicardesconto(float preco, float percentual){
    preco = preco - (preco * (percentual / 100));
    printf("\nO valor do com desconto: %.2f", preco);
    return preco;
}

int main(){
    float precobase = 100;
    float percentual = 0;
    printf("Preço Base: %.2f", precobase);
    printf("\nInsira o porcentual de desnconto: ");
    scanf("%f", &percentual);
    float precofinal = aplicardesconto(precobase, percentual);
    printf("\nPreço Base: %.2f. Preço Final: %.2f.", precobase, precofinal);

    return 0;
}

/*Não o precobase não mudou, pois quando chamamos uma função ela faz uma copia da variavel que utilizamos e armazena na sua prorpria variavel
porém o a variavel precobase continua o mesmo valor*/