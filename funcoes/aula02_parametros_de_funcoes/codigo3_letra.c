#include<stdio.h>
#include<stdlib.h>

// Objetivo: Converte para maiúsculo

/*================================  Protótipo das funções  =====================*/
void letras(char ch);

/*================================  Função principal  =====================*/
int main()
{
    char caractere;
    for(;;)
    {
        printf("Entre com uma letra: ");
        scanf("%c",&caractere);
        letras(caractere);
    }
}

/*================================  Desenvolvimento das funções  =====================*/
void letras(char ch)
{
    switch (ch)
    {
    case 'a':
        putchar('A');
        break;
    case 'b':
        putchar('B');
        break;
    case 'c':
        putchar('C');
        break;
    case 'd':
        putchar('D');
        break;    
    default: putchar('E');
    }
    putchar('\n');
}

