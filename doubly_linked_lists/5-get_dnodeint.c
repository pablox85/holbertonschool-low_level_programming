#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - devuelve posicion del nodo
 * @head: inicio nodos
 * @index: posicion nodo
 * Return: poscion
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{

		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}
	return (NULL);
}

