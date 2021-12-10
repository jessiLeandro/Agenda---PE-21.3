#include <stdio.h>
#include <time.h>

#include "../../index.h"

int escolher_evento(Lista *lista) {
  int tamanho = tamanho_lista(lista), posicao;
  ordenar_lista(lista);

  Elemento *evento = *lista;

  for (int index = 1; index <= tamanho; index++) {
    printf("%i-%s", index, evento->evento.name);
    evento = evento->proximo;
  }
  scanf("%i", &posicao);
  if (posicao > tamanho || posicao < 1) {
    printf("Evento não existente, por favor escolha novamente\n");
    return escolher_evento(lista);
  }
  return posicao;
}