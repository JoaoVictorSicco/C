#include<stdio.h>
#include<stdlib.h>

/*
1.2. Declare um ponteiro ptr e aloque dinamicamente memória para armazenar um valor inteiro. 
     Atribua um valor a essa memória e, em seguida, libere a memória alocada.

*/

int main()
{
    int *ptr;
    // printf("Imprimindo o tamanho em bytes do tipo 'int': %d bytes\n",sizeof(int));

    ptr = (int *)malloc(sizeof(int)); // Alocação dinâmica de memória para um valor inteiro

    if(ptr==NULL)
    {
        printf("Erro ao alocar memnoria!\n");
        return 1;
    }

    *ptr = 20;
    printf("Valor armazenado: %d\n",*ptr); // Atribuição de um valor à memória alocada
    free(ptr);  // Liberação da memória alocada
}