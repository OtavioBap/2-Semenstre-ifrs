#include <stdio.h>

int main1(){

    int hp = 100;
    int *ptr_hp = &hp;

    printf("Hp = %d, Hp = %d\n", hp, *ptr_hp);
    hp += 75;
    printf("Hp = %d\n", *ptr_hp);
    *ptr_hp = *ptr_hp - 20;
    printf("Hp = %d\n", hp);

    return 0;
}

/*Resposta: Utilizando o ponteiro "*ptr_hp" definimos que essa variavel guarda o endereço da variavel "hp", com isso quando mudamos 
o valor do "*ptr_hp"  na verdade estamos alterando o endereço qu estpa dentro dele que é a variavel "hp", por isso que muda instantaneamente*/