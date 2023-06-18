#include<stdio.h>

/*
Exercício 1.1 - Declare uma variável inteira num e um ponteiro ptr. Atribua um valor a num e, em seguida, 
faça com que ptr aponte para num. Imprima o valor de num usando o ponteiro.

*/

int main()
{
    int *ptr, var = 10;
    ptr = &var;             // Ponteiro está apontando para o endereço de var 
    printf("O endereco para o qual ptr aponta eh (em decimal): %d\n",ptr);
    printf("O endereco para o qual ptr aponta eh (em hexadecimal): %X\n",ptr);
    printf("Imprimindo o conteudo de *ptr: %d\n",*ptr);
}