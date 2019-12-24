//Cabeçalho de funções e protótipos

#include <stdio.h>
#include <stdlib.h>

/* Protótipo das funções da torre de Hanói - Marcio */


///////////////////////////////


/* Protótipo das funções da fila de processos - Paulo*/

/* Criar TAD para a fila de processos */

typedef struct fila Fila;
typedef struct nodo Nodo;

struct nodo {
	int id;    //ID do processo
	int tempo; //Tempo de espera em segundo
}

struct fila {
	Nodo *inicio;
	Nodo *fim;
};



///////////////////////////////
