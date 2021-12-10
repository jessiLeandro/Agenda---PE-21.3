#include <stdlib.h>

#include "../../index.h"

int tamanho_fila(Fila *fi){
  int tam = 0; 

  if(fi == NULL){
    return -1;
  } else {
    tam = fi->qtd;

    return tam;
  }

}