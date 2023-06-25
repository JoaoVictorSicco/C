#include<stdio.h>

/*
    Para acessar membros de uma estrutura com uma variavel comum: variavel.membro
    Para acessar membros de uma estrutura com uma variavel do tipo ponteiro: variavel->membro
*/
struct drinks
{
    int margarita,
        dry_martini,
        caipirinha;
};

struct drinks open_bar; /* Variável do tipo struct */
struct drinks *cheers;  /* Declara ponteiro para a estrutura drinks */

void barman(struct drinks *p);

int main()
{
    // cheers = &open_bar;
    // cheers-> margarita = 30;
    // printf("%d\n", cheers->margarita);

    barman(&open_bar);
    printf("%d\n", open_bar.margarita);
    printf("%d\n", open_bar.dry_martini);
    printf("%d\n", open_bar.caipirinha);

}

void barman(struct drinks *p)
{
    p->margarita=18;
    p->dry_martini=20;
    p->caipirinha=22;

    
}