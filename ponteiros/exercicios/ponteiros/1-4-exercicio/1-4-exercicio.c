#include<stdio.h>

/*
1.4. Declare uma string de caracteres e um ponteiro para o primeiro caractere da string. 
Use o ponteiro para percorrer e imprimir cada caractere da string.

*/




int main()
{
    char str[] = "Hello World!"; // Declarando uma string de caracteres
    char *ptr;                  // Criação do ponteiro do tipo char 
    ptr = str;                  // Aponta para o primeiro elemento da string

    // printf("tamanho da string: %d\n",sizeof(str));
    // for(int i=0;i<sizeof(str);i++)
    // {
    //     printf(" %c",*(ptr+i));
    // }

    /*Outra maneira de resolver esse exercicio*/

    while (*ptr != '\0')                    // Percorre a string até encontrar o caractere nulo 
    {  
        printf("%c", *ptr);                 // Imprime o caractere apontado pelo ponteiro
        ptr++;                              // Move o ponteiro para o próximo caractere da string
    }
    

}