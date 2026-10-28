#include <stdio.h>

int contador = 100;

// O que faz: Declara uma variavel local contador, incrementa em 1 e imprime seu valor local. 
//O que recebe: Nada (void). 
//O que devolve: Nada (void).
void funcaoA(void) {
    int contador = 1;
    contador++;
    printf("funcaoA: contador = %d\n", contador);
}

// O que faz: Incrementa e imprime diretamente a variavel global contador.
//O que recebe: Nada (void). 
//O que devolve: Nada (void).
void funcaoB(void) {
    contador++;
    printf("funcaoB: contador = %d\n", contador);
}

int main() {
    printf("main: contador = %d\n", contador);

    funcaoA();
    funcaoB();
    funcaoA();
    funcaoB();

    printf("main: contador = %d\n", contador);

    return 0;
}

/*A funcaoA enxerga sua própria variável local (que oculta a global devido ao sombreamento/shadowing), 
criada e destruída a cada chamada, reiniciando em 1 e tornando-se 2. A funcaoB enxerga a variável global contador, 
modificando diretamente seu espaço persistente na memória a cada execução.*/