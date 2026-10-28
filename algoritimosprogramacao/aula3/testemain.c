#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função atoi
int main(int argc, char *argv[]) {
// Verifica a quantidade de parâmetros passados
// Para executar esse programa na linha de comando:
// ./programa Joaquim 25
if (argc < 3) {
printf("Uso correto: %s <nome> <idade>\n", argv[0]);
return 1; // Retorna erro se faltarem dados
}
// Acessando os textos diretamente como posições de um vetor
// argv[0] é o nome do programa
// argv[1] é o primeiro argumento (Nome)
// argv[2] é o segundo argumento (Idade)
int idade = atoi(argv[2]); // Converte texto para inteiro
// Exibe os dados processados
printf("Programa: %s\n", argv[0]);
printf("Nome: %s\n", argv[1]);
printf("Idade: %d\n", idade);
return 0;
}