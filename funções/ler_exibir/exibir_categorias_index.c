#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Mapeia as categorias e imprime de acordo com o numero da categoria, passado como parametro
void exibir_categorias_index(int idx){

  switch(idx){
    case 1:
      printf("social");
      break;
    case 2:
      printf("trabalho");
      break;
    case 3:
      printf("estudo");
      break;
    case 4:
      printf("aniversarios");
      break;
    case 5:
      printf("beleza/saude");
      break;
    case 6:
      printf("viagens");
      break;
    case 7:
      printf("outros");
      break;
  }
 
}

