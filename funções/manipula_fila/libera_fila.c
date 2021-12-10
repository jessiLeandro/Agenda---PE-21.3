#include <stdlib.h>

#include "../../index.h"

void libera_fila(Fila *fi){
  if(fi != NULL){
    Elemento *no = NULL;

    while(fi->inicio != NULL){
      no = fi->inicio;
      fi->inicio = fi->inicio->proximo;
      free(no);
    }
    
    free(fi);
  }

}
