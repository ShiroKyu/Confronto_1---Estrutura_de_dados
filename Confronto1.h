//Cabeçalho de funções e protótipos

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/* Protótipo das funções da torre de Hanói - Marcio */


///////////////////////////////


/* Protótipo das funções da fila de processos - Paulo*/

/* Criar TAD para a fila de processos */

typedef struct fila Fila;
typedef struct processo Processo;



//Criar a fila de processos
Fila *criaFila();

/* Verifica se a fila de processos está vazia */
int vazio(Fila *f);

/* função auxiliar: insere no fim */
Processo* insere_fim (Processo* fim, int id);

// Função que insere
void insere (Fila* f, int id);

// Função que retira o processo com maior tempo de espera
void retiraProcesso(Fila *f);

//Imprime os processos da fila
void imprimirProcessos(Fila *f);

// Liberar a fila
void liberar(Fila *f);

///////////////////////////////
