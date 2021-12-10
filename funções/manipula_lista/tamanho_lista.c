#include <stdio.h>
#include <stdlib.h>

#include "../../index.h"

int tamanho_lista(Lista *li) {
  int cont = 0;
  if(li == NULL) {
    return 0;
  } else {
    Elemento *no = *li;
    while(no != NULL) {
      cont ++;
      no = no->proximo;
    }
  }
  return cont;
}