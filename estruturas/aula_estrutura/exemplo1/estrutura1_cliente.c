#include<stdio.h>
/*
    Estruturas - tipo de dados que agrupa tipos diferentes de forma a acessa-los com um membro em comum
*/

struct cliente
{
    char nome[30];
    char endereco[40];
    char cidade[30];
    char telefone[11];
    int cep;

}infos;                 // Declara a variavel do tipo struct

/*struct cliente infos <-- ou declara assim aqui embaixo*/



int main()
{
    infos.cep = 1234;
    printf("Nome: ");
    gets(infos.nome);  // Função que aceita somente strings como entrada
    printf("Endereco: ");
    gets(infos.endereco);  // Função que aceita somente strings como entrada

    printf("infos: %s\n",infos.nome);
    printf("infos: %s\n",infos.endereco);
    printf("infos: %d\n",infos.cep);

}


