
#include <string.h>
#include "PilhaEstatica.h"

void iniciaPilha(pilhaEstatica *pilha)
{
    pilha->topo=-1;
}

bool estaVazia(pilhaEstatica *pilha)
{
    return (pilha->topo==-1);
}

bool estaCheia(pilhaEstatica *pilha)
{
    return(pilha->topo==100);
}

void empilha(Objeto item, pilhaEstatica *pilha)
{
    pilha->topo++;
    pilha->array[pilha->topo]=item;
}

void desempilha(Objeto *item, pilhaEstatica *pilha)
{
    *item = pilha->array[pilha->topo];
    pilha->topo--;
}

int tamanhoPilha(pilhaEstatica *pilha)
{
    return ((pilha->topo)+1);
}

Objeto topo(pilhaEstatica *pilha)
{
    return pilha->array[pilha->topo];
}

void imprimePilha(pilhaEstatica *pilha)
{
    printf("\nPILHA:\n");
    for(int i=0; i<=(pilha->topo); i++)

    {
        printf("%i\n",pilha->array[i]);
    }
}

int main()
{
    pilhaEstatica pilha;
    Objeto item;
    int des;

    iniciaPilha(&pilha);

    printf("Digite os elementos da pilha:\n");

    for(int i=0; i<MAXTAM; i++)
    {
        if(estaCheia(&pilha)== 0)
        {
            scanf("%i", &item);
            empilha(item, &pilha);
        }
    }

    imprimePilha(&pilha);

    printf("Elemento do topo: %i\n", topo(&pilha));
    printf("Tamanho da pilha: %i\n", tamanhoPilha(&pilha));
    printf("\nDeseja desempilhar quantos elementos ?: ");

    scanf("%i", &des);

    if(des>0)
    {
        for(int i=0; i<des; i++)
        {
            desempilha(&item, &pilha);
        }
        printf("\nPilha apos o processo:\n");

        imprimePilha(&pilha);

        printf("Elemento do topo: %i\n", topo(&pilha));
        printf("Tamanho da pilha: %i\n", tamanhoPilha(&pilha));
    }
    else
    {
        printf("\nPilha apos o processo:\n");

        imprimePilha(&pilha);

        printf("Elemento do topo: %i\n", topo(&pilha));
        printf("Tamanho da pilha: %i\n", tamanhoPilha(&pilha));
    }
    return 0;
}
