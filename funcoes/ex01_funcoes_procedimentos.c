#include<stdio.h>
#include<stdlib.h>

/*================================  Protótipo das funções  =====================*/
void linhas();

/*================================  Função principal  =====================*/

int main()
{
    linhas();
    printf("\nMenu principal do programa\n\n");
    linhas();
    printf("\nMenu tarefas a executar\n\n");
    linhas();
    printf("\nMenu Help\n\n");
}

/*================================  Desenvolvimento das funções  =====================*/
void linhas()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<30;j++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}
