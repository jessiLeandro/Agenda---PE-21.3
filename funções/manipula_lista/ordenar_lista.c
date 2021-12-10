// https://pt.stackoverflow.com/questions/330286/ordenar-lista-ligada-em-c
#include "../../index.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenar_lista (Lista *li) {
  Elemento *evento1 = *li;

  while (evento1 != NULL){
    Elemento *evento2 = evento1->proximo;
    while (evento2 != NULL){
      //se maior troca o conteudo das duas eventos
      if (evento1->evento.data > evento2->evento.data){ 
        int temp_data = evento1->evento.data;
        evento1->evento.data = evento2->evento.data;
        evento2->evento.data = temp_data;
        int temp_categoria = evento1->evento.categoria;
        evento1->evento.categoria = evento2->evento.categoria;
        evento2->evento.categoria = temp_categoria;
        static char temp[50];
        memcpy(temp, evento1->evento.name, 50);
        memcpy(evento1->evento.name, evento2->evento.name, 50);
        memcpy(evento2->evento.name, temp, 50);
      }
      evento2 = evento2->proximo;
    }
    evento1 = evento1->proximo;
  }
}
