#ifndef ESTATISTICA_H
#define ESTATISTICA_H

#define MAX_NOTAS 50

// Calcula a media dos elementos recebe: vetor e tamanho devolve: media (float).
float media(int v[], int tam);

// Encontra o maior valor recebe: vetor e tamanho devolve: maior nota (int).
int maior(int v[], int tam);

// Encontra o menor valor recebe: vetor e tamanh devolve: menor nota (int).
int menor(int v[], int tam);

// Conta elementos acima de um valor recebe: vetor, tamanho e valor limite devolve: quantidade (int).
int contarAcima(int v[], int tam, float valor);

// Ordena o vetor em ordem crescente recebe: vetor e tamanho devolve: nada (void).
void ordenar(int v[], int tam);

// Exibe os elementos do vetor na tela recebe: vetor e tamanho devolve: nada (void).
void mostrarVetor(int v[], int tam);

#endif