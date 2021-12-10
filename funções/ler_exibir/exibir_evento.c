#include <stdio.h>
#include <time.h>

#include "../../index.h"

// Imprime o evento formatado
void exibir_evento(Elemento *evento){
  char datahora[100];
  strftime( datahora, sizeof(datahora), "%d.%m.%Y - %H:%M:%S", localtime( &evento->evento.data ) );
  printf("\nNome: %s", evento->evento.name);
  printf("Categoria: ");
  exibir_categorias_index(evento->evento.categoria);
  printf("\nData/Hora:: %s\n", datahora);
}