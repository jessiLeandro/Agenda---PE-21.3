#include <stdio.h>
#include <time.h>

#include "../../index.h"

// Lê a categoria
int ler_categoria (){
  int categoria = -1;

  exibir_categorias();
  scanf("%d", &categoria);

  if(categoria < 1 || categoria >= 8){
    printf("*** Entrada inválida ***\n");
    
    return ler_categoria();
  }

  // Retorna um inteiro que representa uma categoria
  return categoria;
}