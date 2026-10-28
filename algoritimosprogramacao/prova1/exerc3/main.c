#include <stdio.h>
#include <string.h>
#include "senha.h"

int main(){
    char senha[51];

    printf("Insira sua senha: ");
    fgets(senha, 51, stdin);

    classificarSenha(senha);
    if(classificarSenha(senha) == 0){
        printf("\nClassificação: Fraca\n");
    }
    if(classificarSenha(senha) == 1){
        printf("\nClassificação: Média\n");
    }
    if(classificarSenha(senha) == 2){
        printf("\nClassificação: Forte\n");
    }
    
    mascararSenha(senha);
    printf("\n%s", senha);

    return 0;
}