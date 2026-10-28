/*
            Resposta da pergunta:
                Ao tentar imprimir a variável comissao dentro da main(). compilador gera um erro de compilação. 
                Isso acontece porque a variável comissao é local do procedimento registrarVenda(), existindo 
                apenas dentro dele e sendo destruída assim que sua execução termina. A função main() não tem 
                acesso ao escopo de outras funções.


*/
#include<stdio.h>

    //declaração global
    int totalVendas = 0; //contador para cada venda
    float valorAcumulado = 0.0; //acumulador de vendas


//-----------------------------------------------------------------------------------------------------(sessão funcão)
    //1} função (retorna valor) 
    void registrarVenda(float valor){

        //variavel local
        float comissao;

        totalVendas++; //contador (add +1 a cada item)
        valorAcumulado= valorAcumulado + valor; //acumulador
        comissao = valor * 0.05;

        printf("| venda registradas: %d \n", totalVendas );
        printf("| comissão; %.2f\n", comissao);
        printf("\n");


    }

    //2} função (n retorna valor e n tem parmetro)
    void relatorio (){ 

        float ticketMedio;
        ticketMedio = valorAcumulado / totalVendas; // calcula

        printf("||----RELATÓRIO DE VENDAS: \n");
        printf("| Total de vendas: %d\n", totalVendas);
        printf("| O valor acumulado: %.2f\n", valorAcumulado);
        printf("| Ticket Médio: %.2f\n", ticketMedio);
    
    }


/*-----(programa main)---------------------------------------------------------------------------------------------------*/

    int main(){
        
        //declaração
        float valor = -1; //para iniciar o laço do while

        //processo;0
        while (valor != 0){
            
            printf("|| informe o valor da %dª venda: ", totalVendas + 1);
            scanf("%f", &valor);

            if(valor != 0){ // ignora se o valor for 0 de primeira
                registrarVenda(valor);
            }
        }
        
        if (totalVendas == 0){

            printf(" | nenhuma venda foi resgistrada");
            return 1;

        }else{
            relatorio();
        }

        return 0;
    }
