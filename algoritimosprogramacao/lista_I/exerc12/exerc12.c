#include <stdio.h>
#include <string.h>
#include <ctype.h>

int senhaValida(const char senha[]) {
    int tam = strlen(senha);
    int temLetra = 0;
    int temNumero = 0;

    if (tam < 8) {
        printf("Erro: A senha deve ter pelo menos 8 caracteres.\n");
        return 0;
    }

    for (int i = 0; i < tam; i++) {
        if (isalpha(senha[i])) {
            temLetra = 1;
        }
        if (isdigit(senha[i])) {
            temNumero = 1;
        }
    }

    if (!temLetra) {
        printf("Erro: A senha deve conter pelo menos uma letra.\n");
        return 0;
    }

    if (!temNumero) {
        printf("Erro: A senha deve conter pelo menos um numero.\n");
        return 0;
    }

    return 1;
}

void montarSaudacao(char destino[], const char nome[]) {
    strcpy(destino, "Bem-vindo(a), ");
    strcat(destino, nome);
    strcat(destino, "!");
}

int ehComandoSair(const char comando[]) {
    return (strcmp(comando, "sair") == 0);
}

void limparQuebraLinha(char str[]) {
    int tam = strlen(str);
    if (tam > 0 && str[tam - 1] == '\n') {
        str[tam - 1] = '\0';
    }
}

int main() {
    char nome[50];
    char senha[50];
    char saudacao[100];
    char comando[30];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    limparQuebraLinha(nome);

    do {
        printf("Digite sua senha: ");
        fgets(senha, sizeof(senha), stdin);
        limparQuebraLinha(senha);
    } while (!senhaValida(senha));

    printf("\n");
    montarSaudacao(saudacao, nome);
    printf("%s\n\n", saudacao);

    do {
        printf("Comandos disponiveis: [ajuda | status | sair]\n");
        printf("Digite um comando: ");
        fgets(comando, sizeof(comando), stdin);
        limparQuebraLinha(comando);

        if (strcmp(comando, "ajuda") == 0) {
            printf("--> Modo de ajuda: Digite 'status' para ver seu perfil ou 'sair' para encerrar.\n\n");
        } else if (strcmp(comando, "status") == 0) {
            printf("--> Status do Sistema: Usuario '%s' logado e autenticado com sucesso.\n\n", nome);
        } else if (!ehComandoSair(comando)) {
            printf("--> Comando invalido. Tente novamente.\n\n");
        }

    } while (!ehComandoSair(comando));

    printf("\nSessao encerrada. Ate logo!\n");

    return 0;
}