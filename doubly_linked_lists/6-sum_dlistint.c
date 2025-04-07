#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - suma valors de nodos
 * @head: inicio de nodos
 * Return: suma de valores de nodos
 */

int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{

		suma += temp->n;
		temp = temp->next;
	}
	return (suma);




}
