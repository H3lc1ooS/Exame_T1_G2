#include <stdio.h>
#include "pacote.h"

// TAD para o Pacote de Sumo
struct pacote
{
    int id;
    float volumeEmLitros;
    float pesoEmGramas;
    int estadoPacote; // Indica se o pacote está dentro dos padrões (0 ou 1)
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