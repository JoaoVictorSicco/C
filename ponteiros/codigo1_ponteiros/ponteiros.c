#include<stdio.h>
/*
    Ponteiros são variáveis que apontam para endereços físicos de variáveis
    O tipo do ponteiro tem que ser compatível com o tipo de variável em que ele vai apontar 

*/
int main()
{
    int *ptr, var = 25;

    ptr = &var;                                                  // Aponta para o endereço de var

    // Estão sendo mostrados em hexadecimal

    printf("\nMostrando em hexadecimal\n");
    printf("&var: %X \n",&var);
    printf("ptr:  %X \n",ptr);                                        // Mostra o endereço de var -> é a mesma coisa que a linha acima &var
    printf("var:  %X \n",var);
    printf("&ptr: %X \n",&ptr);                                       // Mostra o endereço físico do ponteiro ptr
    printf("*ptr: %X \n",*ptr);                                       // Acessa o conteúdo de var através do ponteiro


    printf("\nMostrando em decimal\n");
    printf("&var: %d \n",&var);
    printf("ptr:  %d \n",ptr);                                        // Mostra o endereço de var -> é a mesma coisa que a linha acima &var
    printf("var:  %d \n",var);
    printf("&ptr: %d \n",&ptr);                                       // Mostra o endereço físico do ponteiro ptr
    printf("*ptr: %d \n",*ptr);                                       // Acessa o conteúdo de var através do ponteiro

    *ptr = 10;                                                   // Atualiza o conteúdo de var através do ponteiro
    printf("var novo:  %d \n",var);


    //Verificando o endereço de var
    // printf("endereco em decimal: %d \n",&var);               //Verificando o endereço de var em decimal
    // printf("endereco em hexadecimal: %X \n",&var);           //Verificando o endereço de var em hexadecimal
    // printf("%p \n",&var); 
}