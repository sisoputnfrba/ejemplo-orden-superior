#include <stdio.h>
#include <commons/string.h>

#include "auxiliares.h"

bool esMayorA3(void *elemento) {
	return string_length((char *)elemento) > 3;
}

void mostrarElementosLargos(t_list *lista) {
	t_list *largos = list_filter(lista, esMayorA3);
	printf("Muestro los largos:\n");
	mostrarElementos(largos);
	list_destroy(largos);
}

int main(int argc, char **argv) {
	t_list *lista = crearLista();
	printf("Muestro todos:\n");
	mostrarElementos(lista);

	mostrarElementosLargos(lista);

	liberarLista(lista);
	return 0;
}
