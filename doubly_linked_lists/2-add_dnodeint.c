#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - agregar nodo al inicio
 * @head: inicio nodo
 * @n: no tengo idea
 * Return: algo
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *nuevoNodo;

	nuevoNodo = malloc(sizeof(dlistint_t));

	if (nuevoNodo == NULL)
		return (NULL);

	nuevoNodo->n = n;
	nuevoNodo->prev = NULL;
	nuevoNodo->next = *head;

	if (*head != NULL)
		(*head)->prev = nuevoNodo;

	*head = nuevoNodo;

return (nuevoNodo);
}
