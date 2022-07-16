#include <stdio.h>
#include "gastos.h"

int main(){
		int opc;
		FILE *dados
		
		if((dados = fopen("../dados/gastos.dat","a+")) == NULL){
				printf("Erro ao abrir ficheiro de dados\n");
				exit(EXIT_FAILURE);
		}else{
				for(;;){
						system("clear");
						printf("----- YUKI -----");
						printf("1 - Adicionar Gasto\n");
						printf("2 - Editar Gasto\n");
						printf("3 - Mostrar Gastos\n");
						printf("4 - Mostrar Resumo\n");
						printf("5 - sair\n");
	
						scanf("%d", &opc);
						switch(opc){
								case 1: adicionar_gasto(); break; 
								case 2:	editar_gasto(); break;
								case 3: mostrar_gastos(); break;
								case 4: mostrar_resumo_gastos(); break;
								case 5: printf("Exit Success\n");
										exit(EXIT_SUCCESS); break;
								default:printf("Erro!\n"); break;
						}
				}
		}

		exit(EXIT_FAILURE);
}
