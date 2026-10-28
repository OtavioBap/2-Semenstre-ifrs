#include <stdio.h>

#define TOTAL_ALUNOS 4

int main() {
    float notas[TOTAL_ALUNOS] = {7.5, 8.0, 6.5, 9.0};
    
    // --- 1. CÁLCULO DA MÉDIA ---
    float soma = 0; // BUG 1: Variável não inicializada (contém lixo de memória)
    
    // BUG 2: 'i <= TOTAL_ALUNOS' tenta acessar o índice 4, que não existe (vai de 0 a 3)
    for (int i = 0; i <= TOTAL_ALUNOS; i++) {
        soma += notas[i];
    }
    
    float media = soma / TOTAL_ALUNOS;
    
    
    // --- 2. ENCONTRAR A MAIOR NOTA ---
    float maior = notas[0];
    
    for (int i = 1; i < TOTAL_ALUNOS; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    
    
    // --- 3. EXIBIÇÃO DOS RESULTADOS ---
    printf("--- Analise de Notas da Turma ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    
    return 0;
}