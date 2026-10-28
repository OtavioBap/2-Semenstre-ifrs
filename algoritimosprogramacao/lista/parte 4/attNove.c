/*
    resposta da pergunta:
        É preciso passar o numero de colunas , porque o programa precisa saber o tamanho de cada linha para poder calcular a posição
        dos elementos da matriz na memória. Sem essa informação, o programa não saberia como calcular onde começa cada nova linha da
        matriz.
*/


#include <stdio.h>

#define COL 4 // nº de colunas é 4 (constante)

//----(function section)------------------------------------------------------------------------------ 

    //1} função que mostra as matrizes (não retorna valor)
    void mostraMatriz(int m[][COL], int linhas){
        
        //for que mostra a matrizA
        for(int l = 0; l < linhas; l++){ // for pra linhas

            for(int c = 0; c < COL; c++){ // for para colunas
                printf("| %d ", m[l][c]); //monta a matriz
            }
            printf("\n");// quebra a linha
        }
        printf("\n");
    }


    //2] função que soma as matrizes (não retorna valor)
    void somarMatrizes(int a[][COL],int b[][COL],int c[][COL],int linhas){

        // [i]= linha ||| [j] = coluna

        //for que calcula somar no c
        for (int i = 0; i < linhas; i++){ //for para linhas
            for(int j = 0 ; j < COL; j++){ // for para colunas
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        
    }
    
    //3}função que faz soma das linhas de cada matriz
    int somaLinha(int m[][COL], int linha){

        int soma = 0; //variavel acumuladora

        //for para calcular uma linha
        for(int c = 0; c < COL;c++){
            soma += m[linha][c];
        }

        // ele percorre as colunas da linha informada no for(main) e soma os elementos
        return soma;
    }

    //4}função que faz soma das coluna da matriz c
    int somaColuna(int m[][COL],int linha, int coluna){

        int soma = 0;
        for(int l = 0; l < linha; l++){
            soma += m[l][coluna];
        }
        // ele percorre as linhas da coluna informada no for(main) e soma os elementos
        return soma;
    }



//----(main program)------------------------------------------------------------------------------
    
    int main(){

        int linhas = 3; // tamanho das linhas

        //declaração
        int matrizA[3][4] = {
            {2, 6, 7, 9},
            {6, 9, 5, 8},
            {3, 1, 4, 6}
        }; //numeros da matriz A

        int matrizB[3][4] = {
            {23, 44, 65, 12},
            {11, 31, 50, 70},
            {8, 43, 90, 100}
        }; //numeros da matriz B

        int matrizC[3][4]; //matriz que irá receber os valores;

        //processamento

        //chamada da função
        somarMatrizes(matrizA, matrizB, matrizC, linhas); //faz a soma de matrizes
        
        //saída
        printf("|| matriz A ||\n");
        mostraMatriz(matrizA, linhas);

        printf("|| matriz B ||\n");
        mostraMatriz(matrizB, linhas);

        printf("|| matriz C ||\n");
        mostraMatriz(matrizC, linhas);

        //mostra a soma de linhas de c
        printf("|| soma da linha da matriz c\n");

        for(int l =0; l < linhas; l++){ // soma cada linha da matriz C
            printf("|| linha %d, soma %d || \n", l + 1, somaLinha(matrizC, l));
        }
        printf("\n");

        //mostra a soma de linhas de c
        printf("|| soma da coluna da matriz c\n");
        
        for(int c = 0; c < COL; c++){
            printf("|| coluna %d soma: %d ||\n", c + 1, somaColuna(matrizC, linhas, c));
        }
        return 0;
    }