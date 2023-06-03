#include<stdio.h>
#include<stdlib.h>

//Exercicio resolvido: desenvolva uma função em c para calcular a potenciação de um número real. Calculará o resultado
// de x^n sendo x um real e n inteiro

/*================================  Protótipo das funções  =====================*/
float potencia(float val,int n);
/*================================  Função principal  ==========================*/
int main()
{
    float resultado;
    resultado = potencia(2,3);
    printf("Resultado: %.2f\n",resultado);
    
}

/*================================  Desenvolvimento das funções  ===============*/

float potencia(float val, int n)
{
    float pot = 1.0;

    for(int i = 1;i<=n;i++)
    {
        pot = pot*val;
    }

    return pot;


}