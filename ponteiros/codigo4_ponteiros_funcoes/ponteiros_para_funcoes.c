#include<stdio.h>

// void func(int v[], int n);      /* Na realidade, no primeiro argumento é passado o endereço do primeiro elemento do vetor*/
void func(int *v, int n);      /* Logo pode-ser colocar tanto int v[] quanto int *v */
int letters(const char *str);

int strsize(char *str);

/*Criação de uma função que recebe letters() como parâmetro e uma string */
/*Primeiro parâmetro: é uma string -> char *str || Segundo parâmetro: uma função -> int (*func) (char *)*/

void trata_str(char *s,int (*func)(const char *)); // (char *) é o parâmetro da função func

int main()
{
    // int vec[10] = {1,4,3,4,5};
    char s1[41] = "WR Kits";
    trata_str(s1,letters);
    // func(vec,10);               // Essa linha é uma abstração para func(&vec[0],10)
    // printf("tamanho: %d\n",strsize(s1));
    // printf("letters: %d\n",letters(s1));
    // printf("letters: %d\n",trata_str(s1,letters));

}


void trata_str(char *s,int (*func)(const char *))
{
    printf("A quantidade de letras \x82: ");
    printf("%d\n",(*func)(s));
}

/* Função que retorna a quantidade de letras em uma string */
int letters(const char *str)
{
    register int i=0,letra = 0;
    while (str[i]!='\0')
    {
        if(isalpha(str[i])) letra++;
        i++;
    }
    return letra;
}

/* Função que retorna a quantidade de caracteres em uma string */
int strsize(char *str)          // Recebe uma string como argumento -> char *str é a mesma lógica para int *v
{
    register int i = 0;
    while (str[i]!='\0') i++;   // A função conta o número de letras de uma string, enquanto não chegar a '\0' ela fica contando
    return i;
}

void func(int *v, int n)
{
    register int i;
    for(i=0;i<n;i++)
    {
        printf("v[%d] = %d \n",i,v[i]);

    }
}