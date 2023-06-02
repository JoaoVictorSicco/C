#include<stdio.h>
#include<stdlib.h>

// Objetivo: Parâmetro das funções

/*================================  Protótipo das funções  =====================*/
void caractere_especial(char chr,int number);
void asteriscos();
void dolars();

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
            caractere_especial('*',20);
            break;
        }
        if(numero==9)
        {
            caractere_especial('$',10);
            break;
        }

    }
}

/*================================  Desenvolvimento das funções  =====================*/
// void asteriscos()
// {
//     char asts;
//     for(asts=0;asts<10;asts++)
//     {
//         putchar('*');
//     }
//     putchar('\n');
// }

// void dolars()
// {
//     char asts;
//     for(asts=0;asts<10;asts++)
//     {
//         putchar('$');
//     }
//     putchar('\n');
// }

void caractere_especial(char chr, int number)
{
    char i;
        for(i=0;i<number;i++)
        {
            putchar(chr);
        }
        putchar('\n');
}/*end caractere especial*/
