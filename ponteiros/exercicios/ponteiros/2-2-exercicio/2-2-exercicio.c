#include<stdio.h>

/*
2.2. Escreva uma função soma_vetor que recebe um ponteiro para um vetor de inteiros e seu tamanho como argumentos, 
e retorna a soma de todos os elementos do vetor.

*/

int soma_vetor(int *ptr,int tamanho);     //Função recebe um ponteiro como parâmetro e o tamanho de um vetor
int main()
{
    int vetor[] = {2,4,6,8,10,12};
    int tamanho_vetor = sizeof(vetor)/sizeof(vetor[0]);
    int resultado = soma_vetor(vetor,tamanho_vetor);        //No primeiro parâmetro 'vetor' equivale a '&vetor[0]
    printf("\nSoma de todos os elementos do vetor: %d\n\n",resultado);

}

int soma_vetor(int *ptr,int tamanho)      //Função recebe um ponteiro como parâmetro e o tamanho de um vetor
{
    int soma = 0;
    
    for(int i=0;i<tamanho;i++)
    {
        soma = soma + *(ptr+i);
    }
    return soma;
    
}