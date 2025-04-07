#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - largo de los nodos
 * @h: puntero incio nood
 * Return: algo
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		return (h->n);
		i++;
		h = h->next;
	}
	return(i);

}
