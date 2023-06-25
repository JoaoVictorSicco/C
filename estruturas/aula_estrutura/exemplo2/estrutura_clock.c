#include<stdio.h>


struct clock
{
    int horas;
    int minutos;

}watch;

void estrutura_clock(struct clock var);


int main()
{
    watch.horas     = 10;
    watch.minutos   = 33;
    estrutura_clock(watch);
    
}

void estrutura_clock(struct clock var)
{
    printf("Horas: %d\n",var.horas);
    printf("Minutos: %d\n",var.minutos);
}