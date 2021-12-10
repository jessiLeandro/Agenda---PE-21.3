#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../../index.h"

void remover_evento(Lista *lista){
  if (*lista == NULL) {
    printf("\n***********************");
    printf("\nNenhum evento cadastrado!\n");
    printf("***********************\n\n");
  } else {
    printf("Escolha o evento a ser removido:\n");

    int posicao = escolher_evento(lista);

    Elemento *evento = *lista;

    for (; posicao > 1; posicao--) {
      evento = evento->proximo;
    }

    remove_lista(lista, evento);

    printf("*** Evento removido ***");
  }
}
