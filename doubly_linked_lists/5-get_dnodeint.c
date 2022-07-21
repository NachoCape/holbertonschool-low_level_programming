#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a dlistint_t linked list
 * @head: pointer to a struct of type dlistint_t
 * @index: unsigned int (index of the node, starts in 0)
 *
 * Return: returns the nth node of a dlistint_t linked list, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	while (aux && i != index)
	{
		i++;
		aux = aux->next;
	}
	return (aux);
}
