#include <stdio.h>
#include <time.h>


#include "../../index.h"


void salvar_eventos(Lista *lista, Fila *fi){
  FILE *fp_db;

  fp_db = fopen ("db.txt","w");
  
  printf("\n\n***** Salvando... *****\n");

  ordenar_lista(lista);

  Elemento *no = *lista;


  if (fp_db != NULL) {
    fclose(fp_db);
    while(no != NULL) {
      insere_fila(fi, no->evento);
      
      no = no->proximo;
    } 
  }
  
  printf("\n\n***** Concluido *****\n");  
}
