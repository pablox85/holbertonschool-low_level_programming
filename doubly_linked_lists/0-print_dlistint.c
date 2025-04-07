#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - impirme la catidad de listas
 * @h: listas que se le pasan
 * Return: algo
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
return (i);

}

