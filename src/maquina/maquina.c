#include <stdio.h>
#include "../pacote/pacote.h"

// Definição do struct para a máquina de produção
struct maquina{
    char *nome;              // Nome da máquina
    char *tipo;              // Tipo da máquina (enchimento, embalamento, empilhamento)
    float tempo_processamento;  // Tempo de processamento por unidade (em segundos, por exemplo)
    int unidades_processadas;   // Quantidade de unidades processadas em um dia
    Fila *fila_pacotes;
    int tamanho_fila;           // Tamanho atual da fila
    int estado;                 // Estado atual (ex.: "1 -> ativo", "2 -> parado", "3 -> manutenção")
    int producao_diaria_maxima; // Capacidade máxima de produção por dia
};