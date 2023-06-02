#include<stdio.h>
#include<stdlib.h>

// Objetivo: Divisão entre dois números

/*================================  Protótipo das funções  =====================*/
void divisao_resto(int a, int b);

/*================================  Função principal  =====================*/

int main()
{
    while (1)
    {
        int num1,num2;
        printf("Entre com o valor 1: ");
        scanf("%d",&num1);
        printf("Entre com o valor 2: ");
        scanf("%d",&num2);

        divisao_resto(num1,num2);
    }
    
}

/*================================  Desenvolvimento das funções  =====================*/
void divisao_resto(int a, int b)
{
    printf("Divisao = %d\n",a/b);
    printf("Resto = %d\n",a%b);
}

