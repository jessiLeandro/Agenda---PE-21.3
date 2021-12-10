#include <stdio.h>

#include "../../index.h"

int solicitar_acao(){
  int retorno = -1;
  
  exibir_menu();

  scanf("%d", &retorno);

  while(retorno < 0 || retorno > 5){

    printf("*** Entrada inválida ***\n");
    exibir_menu();
    
    scanf("%d", &retorno);
  }

  return retorno;
}