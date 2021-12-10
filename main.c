#include <pthread.h>
#include <stdio.h>

#include "index.h"

void * process_queue (void *arg) {
  Fila *fi = (Fila *)(arg);
  printf("Process queue...\n");

  for(;;){
    // printf("tamanho %d \n\n", tamanho_fila(fi));
    if(fila_vazia(fi) == 0){
      
      salvar_evento(fi->inicio->evento);
      
      remove_fila(fi);
    }
    
    for(int c=0; c<100000000 ;c ++){}
  }
}

void * process_agenda (void *arg) {
  Fila *fi = (Fila *)(arg);

  agenda(fi);
}

int main() {
	pthread_t t_agenda, t_process_queue;

  Fila *fila;
  fila = criar_fila();

  printf("tamanho %d \n\n", tamanho_fila(fila));

  pthread_create(&t_agenda, NULL, process_agenda, (void *)(fila));
	pthread_create(&t_process_queue, NULL, process_queue, (void *)(fila));
	
	pthread_join(t_agenda, NULL);
	pthread_join(t_process_queue, NULL);

  return 0;
}