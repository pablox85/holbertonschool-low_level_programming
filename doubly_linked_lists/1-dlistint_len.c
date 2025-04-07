#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - cuenta cantidad de nodos
 * @h: puntero incio nodo
 * Return: cantidad d nodos
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);

}
