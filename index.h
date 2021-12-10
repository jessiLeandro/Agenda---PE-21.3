#include <time.h>

#define tamFila 100

// enums, estruturas, listas
enum acoes {Sair, Adicionar, Editar, Remover, VerTodos, Salvar};

typedef struct {
  int categoria;
  char name[100];
  time_t data;
} Evento;


struct elemento{
  Evento evento;
  struct elemento *proximo;
};

typedef struct elemento Elemento;

typedef struct elemento* Lista;

struct fila{
  int qtd;
  Elemento *inicio;
  Elemento *fim;
};

typedef struct fila Fila;

// funções
int agenda(Fila *);

Fila* criar_fila();

void libera_fila(Fila *);

int tamanho_fila(Fila *);

int insere_fila(Fila *, Evento);

int remove_fila(Fila *);

int fila_vazia(Fila *);

Lista* criar_lista();

int solicitar_acao();

void libera_lista(Lista *);

int insere_lista_inicio(Lista *, Evento);

Evento criar_evento();

struct tm ler_data();

int ler_categoria ();

void exibir_categorias();

void exibir_menu();

void adicionar_evento(Lista *, Fila *);

void editar_evento(Lista *);

int tamanho_lista(Lista *);

void ordenar_lista(Lista *);

int escolher_evento(Lista *);

void exibir_evento(Elemento *);

void exibir_categorias_index(int);

void remove_lista(Lista *, Elemento *);

void remover_evento(Lista *);

void ver_todos(Lista *);

void carregar_eventos(Lista *);

void salvar_eventos(Lista *, Fila *); 

void salvar_evento(Evento evento);