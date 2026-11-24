#include <stdio.h>

void aplicarBonus(int *pontosA, int *pontosB, int bonus){
    *pontosA += bonus;
    *pontosB += bonus;
}

int main(){
    int PontoA = 0, PontoB = 0, Bonus = 0;

    printf("Insira os Pontos do Time A: ");
    scanf("%d", &PontoA);
    printf("Insira os Pontos do Time B: ");
    scanf("%d", &PontoB);
    printf("Insira o bônus que deseja aplicar: ");
    scanf("%d", &Bonus);

    aplicarBonus(&PontoA, &PontoB, Bonus);

    printf("O Total de Pontos foi:\nTime A: %d\nTime B: %d", PontoA, PontoB);

    return 0;
}