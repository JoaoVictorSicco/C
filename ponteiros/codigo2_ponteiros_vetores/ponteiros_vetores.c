#include<stdio.h>
#include<stdlib.h>

    /*
        Ao imprimir vec, não é o vetor que está sendo mostrado mas sim o endereço do primeiro elemento o vetor,
        nas linhas abaixo está sendo mostrado o endereço do primeiro elemento em decimal e em hexadecimal
    
    printf("\nEndereco do primeiro vetor em decimal:                  %d\n", vec);
    printf("Endereco do primeiro vetor em decimal de outra maneira:  %d\n", &vec[0]);
    printf("Endereco do primeiro vetor em decimal de outra maneira:  %d\n", &vec[1]);
    printf("Endereco do primeiro vetor em decimal de outra maneira:  %d\n", &vec[2]);
    printf("Endereco do primeiro vetor em hexadecimal:                %X\n", vec);

    */

int main()
{
    // int vec[10] = {5,8,9};
    // int *ptr;

    // ptr = vec;                // Dessa maneira ptr aponta para o endereço do primeiro elemento de vec / &vec[0] -> assim é a msm coisa

    // printf("%X\n",vec);
    // printf("%X\n",&vec[0]);
    // printf("%d\n",ptr);
    // printf("%d\n",*ptr);

    // *ptr = 10;                    // Atualiza o valor do primeiro elemento
    // *(ptr+1) = 12;                // Atualiza o valor do segundo elemento
    // *(ptr+2) = 22;                // Atualiza o valor do terceiro elemento


    // printf("primeiro: %d\n",vec[0]);
    // printf("segundo:  %d\n",*(ptr+1));      // *(ptr+1) = vec[1]
    // printf("segundo:  %d\n",vec[1]);        // *(ptr+1) = vec[1]
    // printf("terceiro: %d\n",vec[2]);        // *(ptr+2) = vec[2]

    char str[31] = "Linguagem C";
    char *ptr;
    ptr = str;                              // Aponta para o primeiro elemento da string
    *(ptr+10) = 'B';
    printf("%s\n",str);
    printf("%p\n",ptr);
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr+10));
    printf("%s\n",str);
}