/* Autores: Paulo S�rgio, Marcio Fernandes */
/* Disciplina: Estrutura de dados */

#include <locale.h>
#include "Confronto1.h"

int main(){
	setlocale(LC_ALL,"");
	
	int opcao;
	
	while(opcao != 3){
		printf("Escolha qual quest�o do 1� Confronto deseja ver:\n");
		printf("[1] - Quest�o 1, Torres de Han�i\n");
		printf("[2] - Quest�o 2, Filas de processos\n");
		printf("[3] - Sair\n"); scanf("%d", &opcao);
		
		switch(opcao){
			case 1:		//Marcio, Torres de Han�i
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
