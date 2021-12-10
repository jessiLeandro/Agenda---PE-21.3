#include <stdio.h>
#include <stdlib.h>

#include "../../index.h"

Fila* criar_fila() {
  Fila *fi = NULL;

  fi = (Fila *) malloc (sizeof(Fila));

  if(fi  != NULL){
    fi->qtd = 0;
    fi->inicio = NULL;
    fi->fim = NULL;
  }

  return fi;
}