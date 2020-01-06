/* Autores: Paulo Sérgio, Marcio Fernandes */
/* Disciplina: Estrutura de dados */

#include <locale.h>
#include "FilaDeProcessos.h"

int main(){
	setlocale(LC_ALL,"");
	int opcao;
	int opcao2;
	
	/* Criar a fila de processos */
	Fila *f = criaFila();

	while(opcao != 3){
		printf("Autores: Paulo Sérgio, Marcio Fernandes\nDisciplina: Estrutura de Dados\nOrientador: André Lira Rolim\n\n");
		printf("==== Confronto 1 ====\n\n");
		printf("Escolha qual questão do 1° Confronto deseja ver:\n");
		printf("[1] - Questão 1, Torres de Hanói\n");
		printf("[2] - Questão 2, Filas de processos\n");
		printf("[3] - Sair\n"); scanf("%d", &opcao);
		
		switch(opcao){
			case 1:		//MARCIO, TORRES DE HANÓI
			
				break;
			
			case 2:		//Paulo, Filas de processo
				system("cls");
				while(opcao2 != 4){
					printf("==== Fila de processos ====\n\n");
					printf("Escolha o que deseja fazer: \n");
					printf("[1] - Inserir novo processo\n");
					printf("[2] - Retirar o processo com maior tempo de espera\n");
					printf("[3] - Imprimir os processos\n"); 
					printf("[4] - Sair\n"); scanf("%d", &opcao2);
					
					switch(opcao2){
						case 1:
							system("cls");
							insere(f, 1);
							break;
						case 2:
							system("cls");
							//retiraProcesso(f);
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
				liberar(f);
				break;
				
			default:
				break;
		}
	}
	
	system("pause");
	return 0;
}
