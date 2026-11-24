#include <stdio.h>
#include <math.h>

    typedef struct ponto Ponto;
    struct ponto {
        float x;
        float y;
    };

    struct circulo {
        Ponto p;
        float r;
    };
    typedef struct circulo Circulo;

    float calcularArea(Circulo c){
        return M_PI * pow(c.r, 2);
    }

int main(){

    Circulo c1;
    c1.p.x = 17;
    printf("Infome o valor de y: ");
    scanf("%f", &c1.p.y);

    c1.r = 3;

    printf("Ponto: (%.2f,%.2f) Raio: %.2f\n", c1.p.x, c1.p.y, c1.r);

    printf("Area do circulo: %.2f\n", calcularArea(c1));

    return 0;
}