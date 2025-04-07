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
    unsigned int i = 0;
    dlistint_t *temp = *h, *nuevoNodo;

    if (h == NULL)
        return (NULL);

        while (temp)
        {
            temp = temp->next;
            i++;
        }

        if (idx == 0)
            return (add_dnodeint(h, n));
        if (idx == i)
            return (add_dnodeint_end(h, n));
        if (idx > i)
            return (NULL);

            temp = get_dnodeint_at_index(*h, idx);
            if (!temp)
            return (NULL);

        nuevoNodo = malloc(sizeof(dlistint_t));
            if (!nuevoNodo)
            return (NULL);

            nuevoNodo->n = n;
            nuevoNodo->prev = temp->prev;
            nuevoNodo->next = temp;

            if(temp->prev)
            {
                temp->prev->next = nuevoNodo;
            }
            else
            {
                *h = nuevoNodo;
                temp->prev = nuevoNodo;
            }

            return (nuevoNodo);

    
}