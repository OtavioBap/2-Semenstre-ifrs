#include <stdio.h>
#define N 4 //limite maximo da matriz
/*----(fuction section)--------------------------*/

    //1} função simetrica 
    int ehSimetrica(int m[][N], int ordem){

        for(int i = 0; i < ordem; i++ ){ //percorre a linha

            for(int j = 0; j < ordem; j++){//percorre a coluna

                if(m[i][j] != m[j][i]){
                    return 0; // a matriz não é simetrica
                }
            }
        }

        return 1; //ela é simetrica
    }
    
    //2} função para somar as diagonais principais 
    int somaDiagonalPrincipal(int m[][N], int ordem){

        int soma = 0;//variavel acumuladora

        for(int i = 0; i < ordem; i ++){
            soma += m[i][i];
        }
        return soma;
    }
    
    
    //3} função que calcula a diagonal securadia da matriz
    int somaDiagonalSecundaria(int m[][N], int ordem){
        int soma = 0;//variavel acumuladora

        for(int i = 0; i < ordem; i++){
            soma += m[i][ordem - 1 - i];
        }
        return soma;
    }

    //4} procedimento para transformar a matriz em transposta
    void transposta(int m[][N], int t[][N], int ordem){
        
        //for para transformar em transposta
        for(int i = 0; i < ordem; i++){ //percorre a linha

            for(int j = 0; j < ordem; j++){ //percorre a coluna

                t[j][i] = m[i][j];
            }
        }
    }

/*----(main program)--------------------------*/
    int main(){
        
        //declaração
        int matriz[3][N] = {
            {1, 7, 3},
            {7, 4, 5},
            {3, 5, 6}
        };//matrz inicial

        int matrizT[3][N]; //matriz destino
        int order = 3; //limite que será usado

        //chamada da função
        int resposta = ehSimetrica(matriz, order);
        int somaDiagonal = somaDiagonalPrincipal(matriz, order);
        int somaSecundaria = somaDiagonalSecundaria(matriz, order);
        transposta(matriz, matrizT, order);

        //saida 
        if(resposta == 0){
            printf("matriz não é simetrica\n");
        }else{
            printf("matriz é simetrica\n");
        }

        printf("a soma da diagonal principal: %d \n", somaDiagonal);
        printf("a soma da diagonal principal: %d \n", somaSecundaria);
        
        printf("|| matriz Transposta ||\n");

        //for para transformar em transposta
        for(int l = 0; l < order; l++){ 
            for(int c = 0; c < order; c++){ 
                printf("| %d", matrizT[l][c]);
            }
            printf("\n");
        }
    
    }