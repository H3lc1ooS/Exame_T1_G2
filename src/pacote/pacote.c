#include <stdio.h>
#include "pacote.h"

// TAD para o Pacote de Sumo
struct pacote
{
    int id;
    float volumeEmLitros;
    float pesoEmGramas;
    int estadoPacote; // Indica o estado do pacote (0 [vazio] ou 1 [cheio])
    int condicoes; // Indica se o pacote está dentro dos padrões (0 [ko] ou 1 [ok])
};

struct no
{
    PacoteSumo pacote;
    PacoteSumo *proximo_pacote;
};

struct fila
{
    NoPacote *inicio;
    NoPacote *fim;
};

struct pilha
{
    NoPacote *topo;
};