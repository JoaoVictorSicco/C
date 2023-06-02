#include<stdio.h>
#include<stdlib.h>

// Objetivo: Criar uma função que ao digitar o número 7 apresenta na saída 10 asteriscos

/*================================  Protótipo das funções  =====================*/
void asteriscos();

/*================================  Função principal  =====================*/

int main()
{
    unsigned numero;  // Mesma coisa que unsigned int numero
    while (1)
    {
        printf("Digite um numero: ");
        scanf("%d",&numero);    
        if(numero==7)
        {
            asteriscos();
            break;
        }
    }
}

/*================================  Desenvolvimento das funções  =====================*/
void asteriscos()
{
    char asts;
    for(asts=0;asts<10;asts++)
    {
        putchar('*');
    }
    putchar('\n');
}