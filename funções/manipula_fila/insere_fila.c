#include <stdlib.h>

#include "../../index.h"

int insere_fila(Fila *fi, Evento evento){
  
  if(fi == NULL){
    return 0;
  } else {
    Elemento *no = NULL;
    no = (Elemento*) malloc(sizeof(Elemento));

    if(no == NULL){
      return 0;
    } else {
      no->evento = evento;
      no->proximo = NULL;

      if(fi->fim == NULL){
        fi->inicio = no;
      } else {
        fi->fim->proximo = no;
      }

      fi->fim = no;
      fi->qtd++;

      return 1;
    }
  }
}
