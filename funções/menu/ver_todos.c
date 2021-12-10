#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../../index.h"

void ver_todos(Lista *lista){
  printf("\n\n***** Eventos *****\n");
  
  ordenar_lista(lista);

  Elemento *no = *lista;

  while(no != NULL) {
    exibir_evento(no);
    no = no->proximo;
  }
  
  printf("\n**************\n");
}
