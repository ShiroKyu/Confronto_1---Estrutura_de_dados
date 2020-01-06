/* Implementa��o das fun��es */

#include "FilaDeProcessos.h"

/* Implementa��o das fun��es da fila de processos - Paulo*/
struct processo {
	int id;    //ID do processo
	Processo *prox;
};

struct fila {
	Processo *inicio;
	Processo *fim;
};

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
Processo* insere_fim (Processo* fim, int id){
	Processo* f = (Processo*) malloc(sizeof(Processo));
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
void retiraProcesso(Fila *f){
	if(vazio(f) == TRUE){
		printf("Fila vaziam n�o h� processos ativos no momento.\n");
	} else {
		Processo *p = f->inicio;
		f->inicio = p->prox;
		free(p);
		if(f->inicio == NULL) //Fila ficou vazia?
			f->fim = NULL;
		}
}

// Imprimir a fila de processos
void imprimirProcessos(Fila *f){
	if(f->inicio == NULL)
		printf("Fila vazia!\n");
	else {
		Processo *aux = f->inicio;
		while(aux != NULL){
			printf("Processo id#%d\n", aux->id);
			aux = aux->prox;
		}
	}
}

//Liberar a fila

void liberar(Fila *f){
	Processo *p = f->inicio;
	while(p != NULL){
		Processo *t = p->prox;
		free(p);
		p = t;
	}
	free(f);
}

///////////////////////////////
