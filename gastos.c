#include <stdlib.h>
#include <string.h>
#include "gastos.h"

void adicionar_gast(FILE *p){
	gasto temp_gasto;
	
	printf("Nome: ");
	scanf("%s" temp_gasto.nome);
	printf("valor Gasto: ");
	scanf("%d", temp_gast.valor_gasto);
	
	temp_gasto.id = generate_id();
	
	fprintf(*p,"%s\n%d\n%d\n", temp_gast.nome, temp_gasto.valor,temp_gasto.id);
}

void mostrar_resumo_gastos(FILE *P){
	FILE *resumo;

	if((resumo = fopen("dados/resumo.dat","r")) == NULL)
		printf("Parece que algo deu errado.\n");
	else
		mostrar_ficheiro(resumo);
}

int pesquisar_gasto(FILE *p, long id){
	

void mostrar_ficheiro(FILE *P){
	while((int ch = getchar()) != EOF)
		putchar(ch);
}

void editar_gasto(FILE *p, long id){
	int res;

	printf("1 - editar\n"); 
	printf("2 - remover\n");
	scanf("%d", &res);

	if(pesquisar_gasto(p, id)){
			
		switch(res){
			case 1: novo_gasto(p);
			case 2: delete_lines(p, 3); break; 
			default: printf("Opção inválida!\n");break;
		}
	}
	else
		printf("Gasto não encontrado\n");
}
