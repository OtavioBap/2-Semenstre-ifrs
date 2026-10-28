        /*
            Resposta da pergunta:
            Isso ocorre pois vetores são sempre passados como ponteiros (passagem por referência) para as funções.
            Diferente da variável preco do Exercício 6, onde o compilador criou uma cópia do valor em um novo endereço 
            de memória, quando passamos um vetor v[] como parâmetro, a função recebe o endereço de memória do primeiro elemento
            do vetor original.
        */



#include <stdio.h>
//------(function section)-------------------

    //1} funçao multiplica todos os elemtos do veotr p/ 2;
    void dobrarValores(int v[], int tam){

        for(int i = 0; i < tam; i++){
            v[i] = v[i] * 2;// multiplica o cada elemento por dois
        }
    }
    
    //função que ordena os elementos do vetor (não retorna valor)
    void ordenar(int v[], int tam){

        int temp; //variavel temporaria p/ ajudar a ordenar

        //for
        for(int i = 0; i < tam; i++){ //repete as fila varias vezes

            for( int j = 0; j < tam -1; j++){ // comapara os elementos e ordena eles.
                
                if ( v[j] > v[j + 1]){
                    
                    temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                }
                
            }

        }
    }

    //3} função que retorna a busca do indice
    int buscar(int v[],int tam, int alvo){

        for (int i = 0; i < tam; i++){
            
            if(alvo == v[i]){
                return i; //retorna o indice se ele encotrar
            }
        }
        return -1; // retorna esse valor se ele não achar
    }

//------(programa main)-------------------
    int main(){

        //declaração
        int vetor[7] = {7, 3, 9, 1, 5, 8, 2}; //vetor com valores ja fixos
        int tamanho = 7;
        int buscaNumero, encontrado;

        printf(" ||      vetor original     ||\n");

        for (int i = 0; i < tamanho; i++){
            printf("| %d", vetor[i]);
        }
        
        printf("\n");//quebrar a linha

        printf(" ||  vetor dobrado  ||\n");

        dobrarValores(vetor, tamanho);

        for (int i = 0; i < tamanho; i++){
            printf("| %d", vetor[i]);
        }

        printf("\n");//quebrar a linha

        printf(" ||  vetor ordenado  ||\n");

        ordenar(vetor, tamanho);

        for (int i = 0; i < tamanho; i++){
            printf("| %d", vetor[i]);
        }
        printf("\n");//quebrar a linha
        
        printf("informe um numero p/ ver se ele está no vetor: ");
        scanf("%d", &buscaNumero);

        encontrado = buscar(vetor, tamanho, buscaNumero);

        if( encontrado == -1 ){
            printf("o numero informado não foi encontrado no vetor");

        }else{
            printf("|| numero encontrado || ele está no %dº posição do vetor.\n", encontrado);
        }
        return 0;
    }