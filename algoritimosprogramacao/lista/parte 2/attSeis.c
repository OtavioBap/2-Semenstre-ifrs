    
    /*RESPOSTA DA PERGUNTA:
       Após o programa finalizar a execução, o valor do precoBase não mudou.
       Na passagem por valor, a função recebe apenas uma cópia do dado contido
       na variável original.Qualquer alteração realizada dentro da função afeta
       apenas a sua cópia local, deixando a variável original intacta. 
    */

#include <stdio.h>

//----(function sesstion)----------------------------

    //1}função que faz o desconto e retorna paramentro
    float aplicarDesconto( float preco, float percentual){
        
        float desconto; //variável de trabalho para o novo preço com desconto;

        desconto = preco *( percentual / 100); //calculo
        preco -= desconto;  // preco = preco - desconto

        printf("|| o valor do preço após aplicar o desconto: %.2f ||\n", preco);

        return preco;

    }
/*---(programa main)-----------------------------------*/

    int main(){

        //declaração 
        float precoBase = 100.0;
        float taxaDesconto = 15.0;
        float precoFinal; // variavel auxiliar;

        printf("preco base: %.2f", precoBase);
        precoFinal = aplicarDesconto(precoBase, taxaDesconto);
        printf("|| preco base: %.2f || preço após o desconto: %.2f||", precoBase, precoFinal);

        return 0;
    }

