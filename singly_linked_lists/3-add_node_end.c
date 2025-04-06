#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - agrega un nodo al fina
 * @head: inicio lista
 * @str: puntero con la str
 * Return: retorna el contenido del nodo
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *nuevoNodo, *temp;

	temp = *head;

	if (str == NULL)
		return (NULL);

	nuevoNodo = malloc(sizeof(list_t));
	if (nuevoNodo == NULL)
		return (NULL);

	nuevoNodo->str = strdup(str);
	if (nuevoNodo->str == NULL)
	{
		free(nuevoNodo);
		return (NULL);
	}

	while (nuevoNodo->str[i] != '\0')
		i++;

	nuevoNodo->len = i;
	nuevoNodo->next = NULL;

	if (*head == NULL)
	{
		*head = nuevoNodo;
		return (nuevoNodo);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nuevoNodo;
		return (nuevoNodo);
	}
}
