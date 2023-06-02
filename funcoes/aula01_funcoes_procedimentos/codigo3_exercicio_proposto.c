#include<stdio.h>
#include<stdlib.h>

/*================================  Protótipo das funções  =====================*/

void mensagem();
/*================================  Função principal  =====================*/

int main()
{

    while(1)
    {
        mensagem();

    }
   
}

/*================================  Desenvolvimento das funções  =====================*/

void mensagem()
{
    int entrada;
    scanf("%d",&entrada);
    if(entrada!=0)
    {
        printf("++++++++++++++\n");
        printf("|            |\n");
        printf("| NUMERO %d   |\n",entrada);
        printf("|            |\n");
        printf("++++++++++++++\n");
    }
    
    
}