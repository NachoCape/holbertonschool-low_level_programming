#include "lists.h"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to a struct of type dlistint_t
 * @idx: unsigned int (index of the poistion to add the node)
 * @n: int (number to add in the new node)
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h, *node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!node || idx > dlistint_len(*h))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	while (i != idx - 1)
	{
		i++;
		aux = aux->next;
	}
	node->n = n;
	node->prev = aux;
	node->next = aux->next;
	aux->next->prev = node;
	aux->next = node;
	return (node);
}
