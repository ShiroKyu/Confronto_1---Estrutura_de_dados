//Cabe�alho de fun��es e prot�tipos

#include <stdio.h>
#include <stdlib.h>

/* Prot�tipo das fun��es da torre de Han�i - Marcio */


///////////////////////////////


/* Prot�tipo das fun��es da fila de processos - Paulo*/

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
