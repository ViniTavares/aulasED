
#include <string.h>
#include "PilhaEstatica.h"




void iniciaPilha(pilhaEstatica *pilha) {
pilha->topo=-1;
}

bool estaVazia(pilhaEstatica *pilha) {
 return (pilha->topo==-1);
}

bool estaCheia(pilhaEstatica *pilha) {
  return(pilha->topo==100);

  }

void empilha(Objeto item, pilhaEstatica *pilha) {
pilha->topo++;
pilha->array[pilha->topo]=item;
}

void desempilha(Objeto *item, pilhaEstatica *pilha) {
*item = pilha->array[pilha->topo];
pilha->topo--;
}

int tamanhoPilha(pilhaEstatica *pilha) {
return ((pilha->topo)-1);
}

Objeto topo(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
}

void imprimePilha(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
}

int main(){



return 0;
}
