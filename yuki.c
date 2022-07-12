#include <stdio.h>
#include "gastos.h"

void adicionar_gasto(void);
void editar_gast(void); 
void mostrar_gastos(void);
void mostrar_resumo_gastos(void);
void pesquisar_gasto(void);
void remover_gasto(void);

typedef struct {
		char *nome;
		char *id;
		int valor_gasto;
}gasto;

int main(){
		for(;;){
				switch(opc){
						case 1: adicionar_gasto(); break; 
						case 2:	editar_gasto(); break;
						case 3: mostrar_gastos(); break;
						case 4: mostrar_resumo_gastos(); break;
						case 5: pesquisar_gasto(); break;
						case 6: printf("Exit Success\n");
								exit(EXIT_SUCCESS); break;
}
