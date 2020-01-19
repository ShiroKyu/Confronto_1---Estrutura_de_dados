//Cabeçalho de funções e protótipos

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/* Definindo TADs */
typedef struct nodo Nodo;
typedef struct pilha Pilha;

struct nodo{
	int disco;
	struct nodo *proximo;
};

struct pilha{
	Nodo *topo;
	int tam;
};

/* Criar pilha */
Pilha *CriarPilha();

/* Colocar na pilha */
void push(Pilha *pilha, int disco);

/* Tirar da pilha */
void pop(Pilha *pilha);

/* Verificar se esta vazia */
int estaVazia(Pilha *pilha);

//Inicializar a pilha 1 com 4 valores.
void iniciar(Pilha *Pilha1);

// Função recursiva pra percorrer a pilha
void recursiva(Nodo *percorre);

// Imprimir a pilha
void imprimir(Pilha *pilha);

//Retira o valor da pilha selecionada e adiciona a nova
void Transfere(Pilha *pilhaSelecionada, Pilha *pilha1, Pilha *pilha2, Pilha *pilha3);

//Verifica se os valores na pilha 3 estão corretos, e retorna verdadeiro ou falso
int verificar(Pilha *pilha);

// Liberar a pilha após o termino do programa
void liberarPilha(Pilha *p);
