#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../../index.h"

void editar_evento(Lista *lista){
  if (*lista == NULL) {
    printf("\n***********************");
    printf("\nNenhum evento cadastrado!\n");
    printf("***********************\n\n");
  } else {
    printf("Escolha o evento a ser editado:\n");

    int posicao = escolher_evento(lista);

    Elemento *evento = *lista;

    for (; posicao > 1; posicao--) {
      evento = evento->proximo;
    }

    evento->evento = criar_evento();

    printf("*** Evento editado ***\n");
    exibir_evento(evento);
    printf("\n***********************\n");
  }
}
