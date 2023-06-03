#include<stdio.h>
#include<stdlib.h>

//Variáveis locais e globais

// A global pode ser acessada localmente mas a local não pode ser acessada fora da função em que ela foi criada

/*================================  Protótipo das funções  =====================*/
int func();

/*================================  Função principal  ==========================*/
int main()
{
    // int var_local = 1;
    // printf("var_local1: %d\n", var_local);
    printf("var = %d\n",func());
    printf("var = %d\n",func());
    printf("var = %d\n",func());

    /*
        Saída no terminal: isso ocorre pois a variável static mantém seu conteúdo ao sair da função em que foi criada, ela 
        não é destruída
        var = 6
        var = 7
        var = 8
    
    
    */
    
}

/*================================  Desenvolvimento das funções  ===============*/

int func()
{
    static int var = 5;                       //
    // printf("var_local2: %d\n", var_local);
    var++;
    return var;

}