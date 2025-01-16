typedef struct pacote PacoteSumo;
typedef struct no NoPacote;
typedef struct fila Fila;
typedef struct pilha Pilha;

// Funções do Pacote
PacoteSumo * criarPacote(float volumeEmLitros, float pesoEmGramas);

// Funções da Fila
Fila * criarFila();
Fila * adicionarPacoteNaFila(Fila *f, PacoteSumo *pacote);
Fila * removerPacoteDaFila(Fila *f, PacoteSumo *pacote);
void   eliminarFila();

// Funções da Pilha
Pilha * criarPilha();
Pilha * empilhar(Pilha *p, PacoteSumo *pacote);
Pilha * desempilhar(Pilha *p, PacoteSumo *pacote);
void    eliminarPilha(Pilha *p);