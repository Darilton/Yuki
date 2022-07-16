//definição de estruturas
typedef struct {
		char *nome;
		long id ;
		int valor_gasto;
}gasto;

//checks if id of new gasto is unique.
int check_id(void);

//generataes id for new gasto
int generate_id(void);

void novo_gasto(FILE *p);
void editar_gasto(FILE *p); 
void mostrar_ficheiro(FILE *p);
void mostrar_resumo_gastos(FILE *p);
void remover_gasto(FILE *p);
