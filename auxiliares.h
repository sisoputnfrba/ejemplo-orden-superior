/*
 * auxiliares.h
 *
 *  Created on: 17 jun. 2018
 *      Author: utnso
 */

#ifndef AUXILIARES_H_
#define AUXILIARES_H_

#include <commons/collections/list.h>

t_list *crearLista(void);
void liberarLista(t_list *);
void mostrarElemento(void *);
void mostrarElementos(t_list *);

#endif /* AUXILIARES_H_ */
