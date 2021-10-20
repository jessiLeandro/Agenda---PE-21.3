typedef struct {
  int categoria;
  char name[100];
  time_t data;
} Evento;

int lerCategoria ();
struct tm lerData();

Evento criarEvento();
void editarEvento(Evento *, int);
void removerEvento(Evento *, int);

int solicitarAcao();
int escolherEvento(Evento *, int);

void exibirEventos(Evento *, int);
void exibirEvento(Evento);
void exibirMenu();
void exibirCategorias();
void exibirCategoriasPorIndex(int);



