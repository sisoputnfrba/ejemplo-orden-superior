#include "auxiliares.h"

#include <stdio.h>
#include <stdlib.h>
#include <commons/collections/list.h>
#include <commons/string.h>

t_list *crearLista(void) {
	t_list *lista = list_create();
	list_add(lista, string_duplicate("uno"));
	list_add(lista, string_duplicate("dos"));
	list_add(lista, string_duplicate("tres"));
	list_add(lista, string_duplicate("cuatro"));
	return lista;
}

void liberarLista(t_list *lista) {
	list_destroy_and_destroy_elements(lista, free);
}

void mostrarElemento(void *elemento) {
	printf("%s\n", ((char *)elemento));
}

void mostrarElementos(t_list *lista) {
	list_iterate(lista, mostrarElemento);
	printf("\n\n");
}
