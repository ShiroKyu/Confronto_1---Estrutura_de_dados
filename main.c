/* Autores: Paulo Sérgio, Marcio Fernandes */
/* Disciplina: Estrutura de dados */

#include <locale.h>
#include "Confronto1.h"

int main(){
	setlocale(LC_ALL,"");
	int opcao;
	int opcao2;
	
	/* Criar a fila de processos */
	Fila *f = criaFila();

	while(opcao != 3){
		printf("Escolha qual questão do 1° Confronto deseja ver:\n");
		printf("[1] - Questão 1, Torres de Hanói\n");
		printf("[2] - Questão 2, Filas de processos\n");
		printf("[3] - Sair\n"); scanf("%d", &opcao);
		
		switch(opcao){
			case 1:		//Marcio, Torres de Hanói
				break;
			
			case 2:		//Paulo, Filas de processo
				while(opcao2 != 4){
					printf("Escolha o que deseja fazer: \n");
					printf("[1] - inserir novo processo\n");
					printf("[2] - retirar o processo com maior tempo de espera\n");
					printf("[3] - imprimir os processos\n"); 
					printf("[4] - sair\n"); scanf("%d", &opcao2);
					
					switch(opcao2){
						case 1:
							insere(f, 1);
							break;
						case 2:
							retiraProcesso(f);
							break;
						case 3:
							imprimirProcessos(f);
							break;
						default:
							break;
					}
				}
				break;
			
			default:
				break;
		}
	}
	
	system("pause");
	return 0;
}
