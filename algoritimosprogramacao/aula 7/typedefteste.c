#include <stdio.h>

typedef unsigned char UChar;
typedef int *PInt;
typedef struct ponto Ponto;
struct ponto {
float x;
float y;
};


int main(){

    UChar z = 'a';
    int w = 120;
    PInt pp;
    pp = &w;
    *pp = 7;

    Ponto sp;
    sp.x = 10;
    printf("Informe o valor de y: ");
    scanf("%f", &sp.y);

    printf("x=%.2f y=%.2f z=%c w=%d\n", sp.x, sp.y, z, *pp);

    return 0;
}