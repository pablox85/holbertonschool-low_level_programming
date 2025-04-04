#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - agrega un nodo al fina
 * @head: inicio lista
 * @str: puntero con la str
 * return: retorna el contenido del nodo
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevoNodo;
	unisgned int i = 0;

	if (str == NULL)
		return (NULL);

	nuevoNodo=malloc(sizeof(list_t));

	nuevoNodo->str = srtdup(str);

	if (nuevoNodo == NULL)
	{
		free(nuevoNodo);
		return (NULL);
	}

	while (str != '\0')
		i++;

	nuevoNodo->len = i;
	nuevoNodo->next = NULL;

	while (str = '\0')
	{
		free(nuevoNUmero);
		reurn (NULL);



}
