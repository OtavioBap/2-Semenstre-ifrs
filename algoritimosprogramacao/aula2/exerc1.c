#include <stdio.h>

int verificarparidade(int n1){
    if (n1 % 2 == 0){
        return 1;
    } if (n1 % 2 == 1){
        return 0;
    }
}

int calculardivisaosegura(int n2, int n3, int *x){
    if (n3 == 0){
        return 0;
    } else{
        *x =  n2 / n3;
        return 1;
    }
}

int main(){

    int a1, def, dividendo, divisor, x = 0, resultado;

    printf("Insira um numero para a verificação: ");
    scanf("%d", &a1);
    def = verificarparidade(a1);
    printf("%d", def);

    printf("\nInsira um dividendo: ");
    scanf("%d", &dividendo);
    printf("Insira um divisor: ");
    scanf("%d", &divisor);

    resultado = calculardivisaosegura(dividendo, divisor, &x);

    printf("%d e %d", resultado, x);

    return 0;
}