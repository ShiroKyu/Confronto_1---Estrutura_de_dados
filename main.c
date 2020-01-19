/* Autores: Paulo Sérgio, Marcio Fernandes */
/* Disciplina: Estrutura de dados */

#include <locale.h>
/* Filas de processo  */
#include "FilaDeProcessos.h"

/* Pilha, torres de hanói */
#include "TorreDeHanoi.h"

int main(){
	setlocale(LC_ALL,"");
	int opcao; //Seleção do 1° menu
	int opcao2; //Seleção da fila de processos
	
	/* Criar a fila de processos */
	unsigned int id = 0; //IDs dos processos
	Fila *f = criaFila();
	
	/* Varíaveis de controle da Pilha */
	int remover, adicionar, vencedor = 10;

	Pilha *Pilha1 = CriarPilha();
	Pilha *Pilha2 = CriarPilha();
	Pilha *Pilha3 = CriarPilha();  //Cria das 3 pilhas

    iniciar(Pilha1);
	
	while(opcao != 3){
		printf("Autores: Paulo Sérgio, Marcio Fernandes\nDisciplina: Estrutura de Dados\nOrientador: André Lira Rolim\n\n");
		printf("==== Confronto 1 ====\n\n");
		printf("Escolha qual questão do 1° Confronto deseja ver:\n");
		printf("[1] - Questão 1, Torres de Hanói\n");
		printf("[2] - Questão 2, Filas de processos\n");
		printf("[3] - Sair\n"); scanf("%d", &opcao);
		
		switch(opcao){
			case 1:		// TORRES DE HANÓI
			
			while(vencedor != 1){
        		system("cls");
				printf("\nTORRE DE HANOI - ESTRUTURA DE DADOS\n\n");
				printf("OBS: Maiores números correspondem aos maiores discos.\n");

				printf("\nPilha 01 -   "); imprimir(Pilha1);
				printf("\nPilha 02 -   "); imprimir(Pilha2);
				printf("\nPilha 03 -   "); imprimir(Pilha3);
				printf("\n");
				printf("\nDigite de qual Pilha deseja remover ou digite -1 para voltar: ");
				scanf("%d", &remover);
				
				if(remover == -1){
					system("cls");
					break;	
				}
				switch(remover){
					case 1:Transfere(Pilha1, Pilha1, Pilha2, Pilha3); break;
					case 2:Transfere(Pilha2, Pilha1, Pilha2, Pilha3); break;
					case 3:Transfere(Pilha3, Pilha1, Pilha2, Pilha3); break;
					default: break;
				}

				if(Pilha3->tam == 4){
            		printf("Voce Venceu! \n\n");
            		vencedor = 1;
				}
			}
			break;
			
			case 2:		//Paulo, Filas de processo
				system("cls");
				opcao2 = 0;
				while(opcao2 != 4){
					printf("==== Fila de processos ====\n\n");
					printf("Escolha o que deseja fazer: \n");
					printf("[1] - Adicionar novo processo\n");
					printf("[2] - Retirar o processo com maior tempo de espera\n");
					printf("[3] - Imprimir os processos\n"); 
					printf("[4] - Voltar\n"); scanf("%d", &opcao2);
					
					switch(opcao2){
						case 1:
							system("cls");
							insereProcesso(f, id++);
							break;
						case 2:
							system("cls");				
							retiraProcesso(f);
							
							break;
						case 3:
							system("cls");
							imprimirProcessos(f);
							break;
						
						default:
							system("cls");
							break;
					}
				} 
				break;
			
			case 3:
				system("cls");
				liberar(f);
				liberarPilha(Pilha1);
				liberarPilha(Pilha2);
				liberarPilha(Pilha3);
				break;
				
			default:
				break;
		
		} 
	}
	
	system("pause");
	return 0;
}

