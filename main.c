#include <stdio.h>
#include <time.h>

#include "index.h"

int main(void) {
  // Declaração das variaveis do tipo interiro; quantidadeEventos também representa o index do ultimo evento +1
  int acao, quantidadeEventos = 0;
  Evento eventos[10];

  printf("*** Agenda PE 2021.3 ***\n");

  // Loop infinito
  for(;;){
    // Soclicita que o usuário entre com uma ação do menu
    acao = solicitarAcao();

    // Executa a lógica referente a ação escolhida
    switch(acao){
      case 0:
        printf("*** Programa Encerrado ***");
        return 0;
      case 1:
        // Cria um evento e armazena na ultima posição desocupada no array de eventos;
        eventos[quantidadeEventos] = criarEvento();
        
        // Imprime o evento criado
        printf("*** Evento adicionado ***\n");
        exibirEvento(eventos[quantidadeEventos]);
        printf("\n***********************\n");

        // Atualiza a última posição desocupada
        quantidadeEventos++;

        break;
      case 2:
        editarEvento(eventos, quantidadeEventos);
        break;
      case 3:
        removerEvento(eventos, quantidadeEventos);
        quantidadeEventos--;
        break;
      case 4:
        printf("Ver todos");
        break;
    }

    // Imprime todos os nomes dos eventos, fiz para testar o desenvolvimento; 
    // exibirEventos(eventos, quantidadeEventos);

  }


  
  return 0;
}