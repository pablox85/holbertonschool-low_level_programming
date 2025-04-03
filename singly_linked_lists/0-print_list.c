#include "lists.h"
/**
 *print_list - lista
 *@h: puntero con cosas....
 *Return: retorno
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
