#include <stdio.h>

void converteTempo(int total_segundos, int *horas, int *minutos, int *segundos){
    *horas = total_segundos / 3600;
    total_segundos = total_segundos % 3600;
    *minutos = total_segundos / 60;
    *segundos = total_segundos % 60;
}

int main(){
    
    int segundos_total = 0, segundos = 0, horas = 0, minutos = 0;

    printf("Insira o total de segundo que deseja converter: ");
    scanf("%d", &segundos_total);

    converteTempo(segundos_total, &horas, &minutos, &segundos);
    printf("O tempo foi de %d.%d.%d horas", horas, minutos, segundos);

    return 0;
}