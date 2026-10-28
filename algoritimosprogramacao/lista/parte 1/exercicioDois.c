#include <stdio.h>
#include <locale.h>

 //sessão
 
    //1 função que retornar valor e calcula
        float celsiusParaFahrenheit(float c){ 

            //calcula e faz a conversão dando um retorno
            return c * 9 / 5 + 32;
        }

    //2 função que retornar valor e calcula kelvin
        float celsiusParaKelvin(float c){

            //calcula e faz a conversão dando um retorno
            return c + 273.15;
        }

    //3 função sem retorno (void) mostra a lista
    void mostrarConversoes(float c){ 

        float f; // para Fahrenheit;
        float k; // para kelvin;

        //chamas as funções e calcula
        f = celsiusParaFahrenheit(c);
        k = celsiusParaKelvin(c);

        //retorna os valores e armazena em cada variavel

        printf("| TABELA DE TEMPERATURAS");
        printf("| CELSIUS: %.2f  || Fahrenheit: %.2f  || Kelvin:  %.2f", c, f, k);
        printf("\n=====================================================\n");
        
    }

/*(PROGRAMA MAIN)---------------------------------------------------------------------------------------------------------------*/

    int main() { 
        setlocale(LC_ALL, "Portuguese");

        //dados
        float temp_ini; // variavel p/ temperatura inicial 
        float temp_fim; //variavel p/ temperatura final
        float passo; // variavel p/ de quanto em quanto tempo aumenta

        //entrada
        printf("| OBS: a resposta deve ser separada por espaços\n");
        printf("|| Informe  a temperatura inicial, temperatura final e o passo para calcular:\n");
        scanf(" %f %f %f", &temp_ini, &temp_fim, &passo);

        //processamento
        for (temp_ini; temp_ini <= temp_fim; temp_ini += passo){ // a cada interação ele some mais vinte ao contador

            mostrarConversoes(temp_ini);

        }
    
        return 0;
    }
