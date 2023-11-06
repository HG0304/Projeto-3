// Struct que define as tarefas
typedef struct {
  char descricao[300];
  char categoria[100];
  int prioridade;
  int status;
} Task;

// Struct que armazena as tarefas
typedef struct {
  Task Task[100]; // array que armazena as 100 tarefas
  int taskCount;  
} ListadeTarefas;

// Funções
int NovaTarefa(ListadeTarefas *lt);
int listTasks(ListadeTarefas lt);
void Escreve_bin();
void Ler_bin();
void limparBuffer();

// To do
// int editaTarefa(Task *tasks, int taskCount);
// int prioridade(Task *tasks, int taskCount);
// int status(Task *tasks, int taskCount);
// int categoria(Task *tasks, int taskCount);
// int exportar(Task *tasks, int taskCount);