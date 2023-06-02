#include<stdio.h>
#include<stdlib.h>

// Objetivo: Cálculo da frequência do oscilador

/*================================  Protótipo das funções  =====================*/
void calcula_frequencia(float ra, float rb, float c);

/*================================  Função principal  ==========================*/
int main()
{
    calcula_frequencia(1000.0,10000.0,1.0E-6);
}

/*================================  Desenvolvimento das funções  ===============*/
void calcula_frequencia(float ra, float rb, float c)
{
    float freq;

    freq = 1.44/((ra+2*rb)*c);
    printf("freq= %.2fHz\n",freq);

}/* end calcula frequencia*/
