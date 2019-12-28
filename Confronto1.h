//Cabe�alho de fun��es e prot�tipos

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/* Prot�tipo das fun��es da torre de Han�i - Marcio */


///////////////////////////////


/* Prot�tipo das fun��es da fila de processos - Paulo*/

/* Criar TAD para a fila de processos */

typedef struct fila Fila;
typedef struct processo Processo;



//Criar a fila de processos
Fila *criaFila();

/* Verifica se a fila de processos est� vazia */
int vazio(Fila *f);

/* fun��o auxiliar: insere no fim */
Processo* insere_fim (Processo* fim, int id);

// Fun��o que insere
void insere (Fila* f, int id);

// Fun��o que retira o processo com maior tempo de espera
void retiraProcesso(Fila *f);

//Imprime os processos da fila
void imprimirProcessos(Fila *f);

// Liberar a fila
void liberar(Fila *f);

///////////////////////////////
