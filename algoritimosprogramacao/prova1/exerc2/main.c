#include <stdio.h>

int placartotal = 0;

//faz a soma do pontos no placar total
//recebe os pontos de cada rodada
//retorna nada
void jogarRodada(int pontosGanhos){
    placartotal = placartotal + pontosGanhos;
    int bonus = 0;
    if (pontosGanhos > 10){
        bonus = 5;
        placartotal = placartotal + bonus;
    }
}

//mostra o placar total
//não recebe nada
//retorna o placara total
int consultarPlacar(void){
    return placartotal;
}

int main(){
    int valor = 0;

    for(int x = 0; x < 3; x++){
        printf("\nInsira o valor da %d rodada: ", x + 1);
        scanf("%d", &valor);
        jogarRodada(valor);
    }

    printf("\nPlacar Total: %d", consultarPlacar());


    return 0;
}