#include <stdio.h>

int total_acessos = 0;
int id_usuario;

void registrar_entrada(){
    int verificador;
    printf("\nInsira seu ID: ");
    scanf("%d", &id_usuario);
    if (verificador == id_usuario){
        total_acessos++;
        printf("Usuário %d entrou. Acesso hoje: %d\n", id_usuario, total_acessos);
    }else{
        total_acessos = 1;
        printf("Usuário %d entrou. Acesso hoje: %d\n", id_usuario, total_acessos);
    }
    verificador = id_usuario;
}

int main() {
    for(int x = 0; x < 3; x++){
        registrar_entrada();
    }

    return 0;
}