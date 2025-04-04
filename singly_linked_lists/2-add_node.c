#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - agrega un nuevo nodo
 * @head: inicio de la lista
 * @str: no tengo idea
 * Return: retorno de valores
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevoNodo;

	nuevoNodo = malloc(sizeof(list_t));

	if (nuevoNodo == NULL)
		return (NULL);

	nuevoNodo->str = strdup(str);
		if (nuevoNodo->str == NULL)
		{
			free(nuevoNodo);
			return (NULL);
		}
		nuevoNodo->len = strlen(nuevoNodo->str);
		nuevoNodo->next = *head;
		*head = nuevoNodo;

		return (nuevoNodo);


}

