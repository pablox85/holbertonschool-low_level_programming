#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - agrega nodo al final
 * @head: inicio nodos
 * @n: nunca me acuerdo
 * Return: los nodos(?)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevoNodo;
	dlistint_t *temp;

	temp = *head;


	nuevoNodo = malloc(sizeof(dlistint_t));

	if (nuevoNodo == NULL)
		return (NULL);

	nuevoNodo->n = n;
	nuevoNodo->next = NULL;
	nuevoNodo->prev = NULL;

	if (*head == NULL)
	{
		*head = nuevoNodo;
		return (nuevoNodo);
	}


		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = nuevoNodo;
		nuevoNodo->prev = temp;


	return (nuevoNodo);

}
