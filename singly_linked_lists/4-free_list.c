#include "lists.h"
#include <stdlib.h>

/**
 * free_list - libera listas
 * @head: inicio nodo
 * Return: algo que nose que
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
