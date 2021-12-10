#include <stdlib.h>

#include "../../index.h"

int remove_fila(Fila *fi){
  if(fi == NULL){
    return 0;
  } else {
    if(fi->inicio == NULL){
      return 0;
    } else {
      Elemento *no = NULL;

      no = fi->inicio;
      fi->inicio = fi->inicio->proximo;
      free(no);

      if(fi->inicio == NULL){
        fi->fim = NULL;
      }

      fi->qtd--;
      return 1;
    }
  }

}