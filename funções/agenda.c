#include "../index.h"
#include <stdio.h>
#include <stdlib.h>

int agenda(Fila *fi) {
  // Declara a variavel "acao" do tipo enum de ações 
  enum acoes acao;

  // Declara e inicia de lista, que é um ponteiro 
  Lista *lista;
  lista = criar_lista();

  // Lê o arquivo de banco de dados
  carregar_eventos(lista);

  printf("*** Agenda PE 2021.3 ***\n");

  // Loop infinito
  for(;;){
    // Soclicita que o usuário entre com uma ação do menu
    acao = solicitar_acao();

    // Executa a lógica referente a ação escolhida
    switch(acao){
      case Sair:
        // Liberação de memoria reservada
        libera_lista(lista);
        return 0;
        
      case Adicionar:
        // Cria um evento e armazena na primeira posição da lista
        adicionar_evento(lista, fi);
        break;

      case Editar:
        editar_evento(lista);
        break;

      case Remover:
        remover_evento(lista);
        break;
        
      case VerTodos:
        ver_todos(lista);
        break;

      case Salvar:
        salvar_eventos(lista, fi);
        break;
    }
  }

  // Liberação de memoria reservada
  libera_lista(lista);
  return 0;
}