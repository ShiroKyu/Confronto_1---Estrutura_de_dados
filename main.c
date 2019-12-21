/* Autores: Paulo Sérgio, Marcio Fernandes */
/* Disciplina: Estrutura de dados */

#include <locale.h>
#include "Confronto1.h"

int main(){
	setlocale(LC_ALL,"");
	
	int opcao;
	
	while(opcao != 3){
		printf("Escolha qual questão do 1° Confronto deseja ver:\n");
		printf("[1] - Questão 1, Torres de Hanói\n");
		printf("[2] - Questão 2, Filas de processos\n");
		printf("[3] - Sair\n"); scanf("%d", &opcao);
		
		switch(opcao){
			case 1:		//Marcio, Torres de Hanói
				break;
			
			case 2:		//Paulo, Filas de processo
				break;
			
			default:
				break;
		}
	}
	
	system("pause");
	return 0;
}
