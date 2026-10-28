#include <stdio.h>

//pega o valor em celsicius e calcula para converter em fahrenheit

float celsiusparafahrenheit(float c){
    return (c * 9 / 5) + 32;
}

//Pega o valor em celsicuis e soma para converter em kelvin
float celsiusparakelvin(float c){
    return c + 273.15;
}

void mostrarconversoes(float c){
    printf("\nCelsius: %.2f\n", c);
    printf("Fahrenheit: %.2f\n", celsiusparafahrenheit(c));
    printf("Kelvin: %.2f\n", celsiusparakelvin(c));
}

int main(){
    float inicial, final, passo;

    printf("Digite a temperatura incial em Celsius: ");
    scanf("%f", &inicial);
    printf("Digite a temperatura final em Celsius: ");
    scanf("%f", &final);
    printf("Digite o passo em Celsius: ");
    scanf("%f", &passo);

    for(float c = inicial; c <= final; c += passo){
        mostrarconversoes(c);
    }

    return 0;
}