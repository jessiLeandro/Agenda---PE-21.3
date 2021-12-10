#include <stdlib.h>

#include "../../index.h"

int fila_vazia(Fila *fi){
  if(fi == NULL){
    return -1;
  } else {
    if(fi->inicio == NULL){
      return 1;
    } else {
      return 0;
    }
  }
}