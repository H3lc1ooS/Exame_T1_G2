#include <stdio.h>
#include "pacote.h"

// TAD para o Pacote de Sumo
struct pacote
{
    int id;
    float volumeEmLitros;
    float pesoEmGramas;
    int estadoPacote; // Indica o estado do pacote (0 [vazio] ou 1 [cheio])
    int condicoes;    // Indica se o pacote está dentro dos padrões (0 [ko] ou 1 [ok])
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

void menu(int opcao)
{
    printf("|------------------------------------------------------------|\n");
    printf("|---------------------Escolha uma opção:---------------------|\n");
    printf("Escolha uma opção:\n");
}

int main()
{
    menu(0);
    /*
    FILE *lista_pacotes = fopen("../../files/lista_pacotes.txt", "r");
    char buffer[255];

    if (lista_pacotes == NULL)
        printf("Erro: Não é possível abrir o ficheiro!\n");
    else
    {
        while (fgets(buffer, 255, lista_pacotes) != NULL)
        {
            printf("%s", buffer);
        }
        printf("\n");
    }

    fclose(lista_pacotes);*/
    return (0);
}
