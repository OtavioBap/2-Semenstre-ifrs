#include <stdio.h>
#include "geometria.h"

int main(){
    float b = 5.5;
    float a = 10.0;
    float area = calcular_area_retangulo(b,a);
    printf("A area do retangulo e: %.2f\n", area);
    return 0;
}