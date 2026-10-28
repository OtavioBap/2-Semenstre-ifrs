#include <string.h>
#include "senha.h"

//classica a senha deacordo com seu tamanho
//recebe a senha definida na main
//retorna a definição da senha
int classificarSenha(char senha[]){
    int tamanho = strlen(senha);

    if(tamanho < 7){
        return 0;
    }
    if(tamanho >= 7 && tamanho <= 10){
        return 1;
    }
    if(tamanho >= 11){
        return 2;
    }
}

//converte o meio da senha em *
//recebe a senha definida na main
//retorna a senha mascarada
void mascararSenha(char senha[]){
    int tamanho = strlen(senha);
    for(int i = 1; i < tamanho -2; i++){
        senha[i] = '*';
    }
}