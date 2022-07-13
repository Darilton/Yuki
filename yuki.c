#include <stdio.h>
#include "gastos.h"

typedef struct {
		char *nome;
		long id ;
		int valor_gasto;
}gasto;

int main(){
		int opc;

		for(;;){
				system("clear");
				printf("----- YUKI -----");
				printf("1 - Adicionar Gasto\n");
				printf("2 - Editar Gasto\n");
				printf("3 - Mostrar Gastos\n");
				printf("4 - pesquisar_gasto\n")
				printf("5 - Mostrar Resumo\n");
				printf("6 - sair\n");

				scanf("%d", &opc);
				switch(opc){
						case 1: adicionar_gasto(); break; 
						case 2:	editar_gasto(); break;
						case 3: mostrar_gastos(); break;
						case 4: mostrar_resumo_gastos(); break;
						case 5: pesquisar_gasto(); break;
						case 6: printf("Exit Success\n");
								exit(EXIT_SUCCESS); break;
						default:printf("Erro!\n"); break;
}
