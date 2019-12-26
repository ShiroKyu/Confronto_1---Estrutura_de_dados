/* Implementa��o das fun��es */

#include "Confronto1.h"

/* Implementa��o das fun��es da torre de Han�i - Marcio */


///////////////////////////////


/* Implementa��o das fun��es da fila de processos - Paulo*/


/* Criar a fila de processos */
Fila *criaFila(){
	Fila *f = (Fila*) malloc(sizeof(Fila));
	f->inicio = NULL;
	f->fim = NULL;
	return f;
}

/* Verifica se a fila de processos est� vazia */

int vazio(Fila *f){
	if(f->inicio == NULL)
		return TRUE;
	return FALSE;
}

/* Adicionar processos nela */

/* fun��o auxiliar: insere no fim */
Nodo* insere_fim (Nodo* fim, int id){
	Nodo* f = (Nodo*) malloc(sizeof(Nodo));
	f->id = id;
	f->prox = NULL;
	
	if (fim != NULL) //verifica se lista n�o estava vazia
		fim->prox = f;
	return f;
}

// Fun��o que insere
void insere (Fila* f, int id){
	f->fim = insere_fim(f->fim, id); /*Chama a fun��o que insere no fim */
	
	if (f->inicio == NULL) /* fila antes vazia? */
		f->inicio = f->fim;
}

// Fun��o que retira o processo com maior tempo de espera

Nodo *retiraProcesso(Fila *f){
	if(vazio(f) == TRUE)
		printf("N�o h� processos ativos no momento!\n");
	else {
		int id = f->inicio->id;
		
		Nodo *p = f->inicio;
		free(f->inicio);
		
		if (f->inicio == NULL) /* fila ficou vazia? */
		f->fim = NULL;
		return p;
	}
}

///////////////////////////////

