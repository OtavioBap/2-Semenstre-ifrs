#include <stdio.h>

// O que faz: Calcula o indice de massa corporal dividindo peso pela altura ao quadrado. 
//O que recebe: Dois valores float (peso e altura). 
//O que devolve: Um float representando o valor do IMC.
float calcularIMC(float peso, float altura){
    return peso / (altura * altura);
}

// O que faz: Mapeia o valor do IMC para um codigo numérico de faixa de peso. 
//O que recebe: O valor float do IMC. 
//O que devolve: Um inteiro de 1 a 4 representando a faixa do IMC.
int classificarIMC(float imc){
    if (imc < 18.5){
        return 1;
    } else if (imc >= 18.5 && imc < 25.0){
        return 2;
    }else if (imc >= 25.0 && imc < 30.0){
        return 3;
    } else{
        return 4;
    }
}

// O que faz: Imprime no terminal o valor do IMC e o texto correspondente a sua faixa. 
//O que recebe: O IMC em float e o codigo inteiro da faixa. 
//O que devolve: Nada (void).
void exibirResultado(float imc, int faixa){
    printf("\nIMC: %0.2f", imc);
    switch (faixa){
    case 1:
        printf("\nClassificação: Abaixo do peso.\n");
        break;
    case 2:
        printf("\nClassificação: Normal\n");
        break;
    case 3:
        printf("\nClassificação: Sobrepeso.\n");
        break;
    case 4:
        printf("\nClassificação: Obesidade.\n");
        break;
    }
}

int main(){
    int pessoas;
    float peso, altura;

    printf("Quantas pessoas serão avaliadas: ");
    scanf("%d", &pessoas);

    for(int x = 1; x <= pessoas; x++){
        printf("\nDigite a altura da pessoa %d: ", x);
        scanf("%f", &altura);
        if(altura <= 0){
            printf("Altura ínvalida! Tente novamente.");
            x = x - 1;
        } else{
            printf("Digite o peso da pessoa %d: ", x);
            scanf("%f", &peso);
            exibirResultado(calcularIMC(peso, altura),classificarIMC(calcularIMC(peso, altura)));
        }
    }


    return 0;
}