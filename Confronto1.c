/* Implementação das funções */

#include "Confronto1.h"

/* Implementação das funções da torre de Hanói - Marcio */


///////////////////////////////


/* Implementação das funções da fila de processos - Paulo*/


/* Criar a fila de processos */
Fila *criaFila(){
	Fila *f = (Fila*) malloc(sizeof(Fila));
	f->inicio = NULL;
	f->fim = NULL;
	return f;
}

/* Verifica se a fila de processos está vazia */

int vazio(Fila *f){
	if(f->inicio == NULL)
		return TRUE;
	return FALSE;
}

/* Adicionar processos nela */

/* função auxiliar: insere no fim */
Nodo* insere_fim (Nodo* fim, int id){
	Nodo* f = (Nodo*) malloc(sizeof(Nodo));
	f->id = id;
	f->prox = NULL;
	
	if (fim != NULL) //verifica se lista não estava vazia
		fim->prox = f;
	return f;
}

// Função que insere
void insere (Fila* f, int id){
	f->fim = insere_fim(f->fim, id); /*Chama a função que insere no fim */
	
	if (f->inicio == NULL) /* fila antes vazia? */
		f->inicio = f->fim;
}

// Função que retira o processo com maior tempo de espera

Nodo *retiraProcesso(Fila *f){
	if(vazio(f) == TRUE)
		printf("Não há processos ativos no momento!\n");
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

