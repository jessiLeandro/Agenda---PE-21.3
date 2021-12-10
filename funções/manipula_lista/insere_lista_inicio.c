#include <stdio.h>
#include <stdlib.h>

#include "../../index.h"

int insere_lista_inicio(Lista *li, Evento evento){
  if(li == NULL){
    return 0;
  } else {
    Elemento *no;
    no = (Elemento *) malloc(sizeof(Elemento));

    if(no == NULL){
      return 0;
    } else {
      no->evento = evento;
      no->proximo = (*li);
      *li = no;
      return 1;
    }
  }
}