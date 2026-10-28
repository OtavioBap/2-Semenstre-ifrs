/*
    Resposta da pergunta:
        Se apargarmos os prototipos e compilar, irá dar erro de compilação porque main() tentar
        chamar funções que ainda não foram declaradas.
        O compilador precisa conhecer a função antes que ela seja chamada.dessa forma,
        os protótipos server para declara-las antes, pois o main() conhece o que estão acima
        dele.
*/


#include <stdio.h>

// prototypies
    int ehPrimo(int n);
    int primosAte(int limite, int v[]);
    void mostrarVetor(int v[], int tam);
    int proximoPrimo(int n);

//-------(main program)----------------------------------------------

    int main(){

        //declarações
        int vetor[100];
        int numLimite; //variavel para o valor informado pelo usuario
        int qtd_primos; //variveis auxiliares

        //entrada
        printf("|| informe um nº para verificarmos os primos dele: ");
        scanf("%d", &numLimite);

        //processamento e saida

        qtd_primos = primosAte(numLimite, vetor);//chama a função e joga a resposta na variavel
        mostrarVetor(vetor, qtd_primos);

        return 0;
    }

//-------(funciton section)--------------------------------------------

    //função que retorna a quantidade de nº primos e coloca no vetor
    int primosAte(int limite, int v[]){

        int primos = 0; //contador

        for(int n = 2; n <= limite; n++){

            if(ehPrimo(n) == 1){
                v[primos] = n; //add o numero no vetor
                primos++; //add + 1 no contador
            }
        }
        
        return primos; //fim
    }
    
    //função que verifica se o numero ele é primo
    int ehPrimo(int n){

        if( n < 2){
            return 0; // caso o numero seja menor que dois ou um
        }
        
        for(int divisor = 2; divisor < n; divisor++){ //pega o numero do for da função primosAte e verifica se ele é compara  com o for do divisor
            if(n % divisor == 0){ //verfica se numero(n) é tem divisao por zero(d)

                return 0; // se ele não for primo

            }
        }
        return 1; //se for primo
    }

    //função para encontrar o proximo primo 
    int proximoPrimo(int n){
        
        for(int i = n + 1; /*sem condição*/ ; i++){
            if (ehPrimo(i) == 1){
                return i; //retorna o primo e para
            }
        }
    }
    
    //procedimentos para mostrar a o vetor
    void mostrarVetor(int v[], int tam){

        for(int i = 0; i < tam; i++){
            printf("|| %d", v[i]);

            if((i + 1)  % 10 == 0){
                printf("\n");// quebra a linha a cada 10 números
            }
        }
    }