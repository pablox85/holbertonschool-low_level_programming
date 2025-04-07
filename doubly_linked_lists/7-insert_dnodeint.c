#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserta nodo en lugar especifico
 * @h: puntero a la lista
 * @idx indice a insertar
 * @n: valor nodo
 * Return: valor del nuevo nodo
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	if (!temp)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = temp->prev;
	new->next = temp;
	if (temp->prev)
		temp->prev->next = new;
	else
		*h = new;
	temp->prev = new;
	return (new);
}
