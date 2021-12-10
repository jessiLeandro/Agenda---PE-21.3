#include <stdio.h>
#include <stdlib.h>

#include "../../index.h"

void remove_lista(Lista *li, Elemento *elem){
  if(li == NULL){
    printf("Nenhum evento cadastrado!\n");
  } else if((*li) == NULL){
    printf("Nenhum evento cadastrado!\n");
  } else {
    Elemento *ant, *no;
    no = *li;
    while(no != NULL && no->evento.name != elem->evento.name && no->evento.categoria != elem->evento.categoria && no->evento.data != elem->evento.data){
      ant = no;
      no = no->proximo;
    }
    if(no == *li){
      *li = no->proximo;
    } else {
      ant->proximo = no->proximo;
    }
    free(no);
  }
}