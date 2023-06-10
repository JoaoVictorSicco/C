#include<stdio.h>

int main()
{
    short var = 10;
    short *ptr;

    ptr = &var;

    printf("%X\n",&var);
    printf("%X\n",ptr);
    ptr++;

    printf("%X\n",ptr);     //Endereço está 2 bytes a mais
    ptr--;
    printf("%X\n",ptr);     //Endereço está 2 bytes atrás
    ptr--;
    printf("%X\n",ptr);     //Endereço está 2 bytes atrás
}