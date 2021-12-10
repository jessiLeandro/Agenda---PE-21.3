#include <stdio.h>
#include <stdlib.h>

#include "../../index.h"

void libera_lista(Lista *li) {
  printf("*** Programa Encerrado ***\n");
  if (li != NULL) {
    Elemento *no;
    while((*li) != NULL) {
      no = *li;
      *li = (*li)->proximo;
      free(no);
    }
    free(li);
  }
}