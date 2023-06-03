#include<stdio.h>
#include<stdlib.h>

//Função char retorna um caractere 'H' ou 'L' se o valor for maior que x

/*================================  Protótipo das funções  =====================*/
char high_low(int valor);
/*================================  Função principal  ==========================*/
int main()
{
    char resultado;
    resultado = high_low(1000);
    printf("Resultado: %c\n",resultado);
}

/*================================  Desenvolvimento das funções  ===============*/

char high_low(int valor)
{
    if(valor>100)
    {
        return 'H';
    }
    else
    {
        return 'L';
    }
}