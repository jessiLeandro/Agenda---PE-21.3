#include <stdio.h>
#include <stdlib.h>

#include "../../index.h"

Lista* criar_lista() {
  Lista *li;
  li = (Lista*) malloc(sizeof(Lista));

  if (li != NULL) {
    *li = NULL;
  }

  return li;
}