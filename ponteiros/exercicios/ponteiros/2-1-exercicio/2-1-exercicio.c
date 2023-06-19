#include<stdio.h>
#include<stdlib.h>

/*
2.1. Declare um vetor de inteiros e um ponteiro que aponta para o primeiro elemento do vetor. 
Imprima os elementos do vetor usando o ponteiro.

*/

int main()
{
    int vetor[5] = {10,9,5,4,2};        // Vetor de inteiros com 5 elementos no total
    int *ptr;
    ptr = vetor;                    // Equivale a ptr = &vetor[0]

    int tamanho_vetor = sizeof(vetor)/sizeof(vetor[0]);
    for(int i = 0;i<tamanho_vetor;i++)
    {
        printf("elemento %d: %d\n",i,*(ptr+i));
    }

}