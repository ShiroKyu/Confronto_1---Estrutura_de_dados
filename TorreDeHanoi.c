//Implementação das funções

#include "TorreDeHanoi.h"

/* TADs*/

Pilha *CriarPilha(){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->topo = NULL;
	p->tam = 0;
	if(p){
		return p;
	}
	else {
		printf("Falha na alocacao");
		exit(1);
	}
}

void push(Pilha *pilha, int disco){
	Nodo *novo = (Nodo*)malloc(sizeof(Nodo));
	novo->proximo = NULL;
	novo->disco = disco;

 	if(pilha->tam == 0){
    	pilha->topo = novo;
	}
	
 	else {
  		novo->proximo = pilha->topo;
  		pilha->topo = novo;
 	}
 	pilha->tam++;
}

void pop(Pilha *pilha){
	if(pilha->tam == 1){ //se tover so um elemento exclui o topo, que é ele
        pilha->topo = NULL;
        pilha->tam--;
	}
	else if(pilha->tam == 0){
		
	}
	else {
		Nodo *aux;
		aux = pilha->topo->proximo;
		pilha->topo = aux;
		pilha->tam--;
	}
}

int estaVazia(Pilha *pilha){
	if(pilha->topo == NULL)
		return TRUE;
	
	return FALSE;
}

//Inicializa a pilha 1 com 4 valores.
void iniciar(Pilha *Pilha1){ 
	int k;
	for(k = 4; k >= 1 ; k--){
		push(Pilha1, k);
	}
}

void recursiva(Nodo *percorre){
    if(percorre->proximo == NULL){
    }
    else {
        recursiva(percorre->proximo);
    }
    printf("%d ",percorre->disco);
}

void imprimir(Pilha *pilha){
    Nodo *aux;
    if (pilha->topo == NULL){
        printf("Esta Vazia!");
    }
    else {
        recursiva(pilha->topo);
    }
}

//Retira o valor da pilha selecionada e adiciona a nova
void Transfere(Pilha *pilhaSelecionada, Pilha *pilha1, Pilha *pilha2, Pilha *pilha3){ 
	int adicionar;
	Nodo *aux = pilhaSelecionada->topo;

	printf("\nPara qual pilha deseja mover?");
	scanf("%d",&adicionar);

    if(pilhaSelecionada->tam != 0){ // se tem algo para mover
		switch(adicionar){
		case 1:
   		if(pilha1->tam == 0){
            push(pilha1, aux->disco);
            pop(pilhaSelecionada);
   		}
   		else if(pilhaSelecionada->topo->disco < pilha1->topo->disco){
        	push(pilha1, aux->disco);
        	pop(pilhaSelecionada);
   		}
		break;
		
		case 2:
   		if(pilha2->tam == 0){
            push(pilha2, aux->disco);
            pop(pilhaSelecionada);
   		}
   		else if(pilhaSelecionada->topo->disco < pilha2->topo->disco){
            push(pilha2, aux->disco);
            pop(pilhaSelecionada);
   		}
		break;
		
		case 3:
   		if(pilha3->tam == 0){
            push(pilha3, aux->disco);
            pop(pilhaSelecionada);
   		}
   		else if(pilhaSelecionada->topo->disco < pilha3->topo->disco){
            push(pilha3, aux->disco);
            pop(pilhaSelecionada);
   		}
		break;
		}
    }
    else
        printf("movimento invalido!\n");
}

//Verifica se os valores na pilha 3 estão corretos, e retorna verdadeiro ou falso
int verificar(Pilha *pilha){ 
	int k;

	for(k=1; k<=4; k++){
		if(pilha->topo->disco == k){
			Nodo *aux = pilha->topo;
			int resultado = aux->disco;
			pilha->topo = aux->proximo;
			free(aux);
			
			if(k == 4){
				return TRUE;
				printf("Parabens, voce venceu!!");
			}
		} 
		else
			return FALSE;
	}
}

void liberarPilha(Pilha *p){
	while(p->topo != NULL){
		Nodo *aux = p->topo->proximo;
		free(p->topo);
		p->topo = aux;
	}
}

