#include <stdlib.h>
#include "lists.h"
/**
 * list_len - largo de la lista
 * @h: puntero al primer nodo
 * Return: numero de nodos
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
