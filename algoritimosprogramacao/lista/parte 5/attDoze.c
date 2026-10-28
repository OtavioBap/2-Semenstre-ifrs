#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*------(function section)--------------------------------------*/

    //1} função que verifica se a senha é valida
    int senhaValida(const char senha[]){

        int tamanho = strlen(senha);
        int temLetra = 0, temNum = 0; //variaveis auxiliar 

        if(tamanho < 8){
            return 2;// a senhe tem que ter pelo menos 8 caracteres
        }

        for(int i = 0; i < tamanho; i++){
            if(isalpha(senha[i])){
                temLetra = 1;
            }

            if(isdigit(senha[i])){
                temNum = 1;
            }
        }

        if(temNum == 0){
            return 3; 
        }else if(temLetra == 0){
            return 4;
        }
        
        //if final
        if( temLetra == 1 && temNum == 1){
            return 1; //consedido
        }else{
            return 0; //negado
        }
        
    }

    //2}procedimento para mostrar a saldação
    void mostrarSaudacao(char destino[], const char nome[]){
        
        char final[3] = "!";

        strcpy(destino, "Bem vindo(a),");
        strcat(destino, nome);
        strcat(destino, final);

        printf(" %s \n", destino);
    }
    
    //3} função que retorna valor para sair
    int ehComandoSair(const char comando[]){

        if( strcmp(comando, "sair") == 0){
            return 1;
        }else{
            return 0;
        }
    }
/*------(main program)-------------------------------------*/
    int main (){
        
        //declaração
        char user[51];//string para o nome do individuo
        char password[51]; //string para senha
        char destino[51]; 
        char comando[51];
        int validacao; //varivel para validar a senha

        //entrada

        //pergunta o nome
        printf("| informe seu nome: ");
        fgets(user, 51, stdin);

        int tamanho = strlen(user); //pega o tamanho
        if(user[tamanho - 1] == '\n'){ //tratamento do enter que fica armazenado
             user[tamanho -1] = '\0';
        }

        do{

            //pertunta a senha
            printf("informe sua senha: ");
            fgets(password, 51, stdin);

            tamanho = strlen(password); //pega o tamanho
            if(password[tamanho - 1] == '\n'){ //tratamento do enter que fica armazenado
                password[tamanho -1] = '\0';
            }
            
            //chamada da função
            validacao = senhaValida(password);

            //verifica
            if(validacao == 2){
                printf("|| A senha deter ter pelo menos 8 caracteres\n");
                printf("\n");

            }else if(validacao == 3){
                printf("|| A senha deter ter um numero\n");
                printf("\n");

            }else if(validacao == 4){
                printf("|| A senha deter ter uma letra\n");
                printf("\n");
            }

        }while( validacao != 1);
        
        mostrarSaudacao(destino, user); //faz a saudação ao usuario

        //segundo do while
        do{
            printf("| escolher uma das opções abaixo\n");
            printf("|ajuda || status | sair|\n");

            scanf("%50s", comando);

            if(strcmp(comando,"ajuda")== 0){
                printf("\n|| ajuda || Comandos disponíveis: ajuda, status e sair ||\n");


            }else if(strcmp(comando, "status") == 0){
                printf("\n|| status || Usuário autenticado. Sistema funcionando normalmente ||\n");

            }else if(ehComandoSair(comando) == 1){
                printf("\n || saindo ||\n");

            }else{
                printf("\nComando inválido!\n");
            }


        }while(ehComandoSair(comando) == 0);

        return 0;
    }