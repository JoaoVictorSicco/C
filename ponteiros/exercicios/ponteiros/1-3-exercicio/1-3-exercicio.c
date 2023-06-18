#include<stdio.h>

/*
1.3. Escreva uma função swap que recebe dois ponteiros para inteiros como argumentos e troca os valores apontados por eles.

*/

void funcao_troca_valores(int *ptrA, int *ptrB);

int main()
{
    int A = 10, B = 20;
    printf("Antes da troca: A = %d, B = %d\n", A, B);
    funcao_troca_valores(&A,&B);
    printf("Depois da troca: A = %d, B = %d\n", A, B);
  
    
}

void funcao_troca_valores(int *ptrA, int *ptrB)
{
    int temporario = *ptrA;  //  Armazena o valor apontado por ptrA em uma variável temporária
    *ptrA = *ptrB;           //  Atribui o valor apontado por ptrB para o local apontado por ptrA
    *ptrB = temporario;      //  Atribui o valor armazenado na variável temporária para o local apontado por ptrB
}