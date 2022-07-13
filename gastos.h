//checks if id of new gasto is unique.
int check_id(void);

//generataes id for new gasto
int generate_id(void);

void adicionar_gasto(FILE *p);
void editar_gast(FILE *p); 
void mostrar_gastos(FILE *p);
void mostrar_resumo_gastos(FILE *p);
void pesquisar_gasto(FILE *p);
void remover_gasto(FILE *p);
