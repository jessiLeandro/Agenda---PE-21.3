#include "../../index.h"
#include <stdio.h>
#include <stdlib.h>

void adicionar_evento(Lista *lista, Fila *fi) {
  // Inicializa o inteiro resposta para ser utilizado na manipulação da lista de eventos
  int resposta;

  Evento evento = criar_evento();

  resposta = insere_lista_inicio(lista, evento);
  
  if (resposta == 1) {
    printf("*** Evento adicionado ***\n");

    insere_fila(fi, evento);
  
  } else {
    printf("*** Erro ao criar evento ***\n");
  }
}