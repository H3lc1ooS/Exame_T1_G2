#include <stdio.h>
#include "../pacote/pacote.h"

// Definição do struct para a máquina de produção
struct maquina{
    char *nome;
    char *tipo; // (enchimento, embalamento, empilhamento)
    float tempo_processamento;  // Tempo de processamento por unidade (em segundos)
    int unidades_processadas;   // Quantidade de unidades processadas em um dia
    Fila *fila_pacotes;
    int tamanho_fila;
    int estado; // Estado atual (ex.: "1 -> activa", "2 -> parada", "3 -> manutenção")
    int producao_diaria_maxima;
};