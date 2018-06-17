#include <stdio.h>
#include <commons/string.h>

#include "auxiliares.h"

void mostrarElementosLargos(t_list *lista, int longitudMinima) {
	char *algunaCosa = "Un valor raro";
	bool _esMayorAlParametro(void *elemento) {
		printf("%s\n", algunaCosa);
		return string_length((char *)elemento) > longitudMinima;
	}

	t_list *largos = list_filter(lista, _esMayorAlParametro);
	printf("Muestro los largos:\n");
	mostrarElementos(largos);
	list_destroy(largos);
}

int main(int argc, char **argv) {
	t_list *lista = crearLista();
	printf("Muestro todos:\n");
	mostrarElementos(lista);

	mostrarElementosLargos(lista, 4);

	liberarLista(lista);
	return 0;
}
