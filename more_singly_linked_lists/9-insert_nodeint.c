#include "lists.h"
#include "2-add_nodeint.c"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer struct
 * @idx: integer (index of the position to add)
 * @n: integer (element to add)
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head, *nodo = NULL;
	unsigned int i = 0;

	if (!p && idx == 0)
		return (add_nodeint(head, n));
	while (p && i < idx - 1)
	{
		p = p->next;
		i++;
	}
	if (!p)
		return (NULL);
	if (idx == 0)
		nodo = add_nodeint(head, n);
	else if (!p->next && i == idx - 1)
		nodo = add_nodeint_end(head, n);
	else
	{
		nodo = malloc(sizeof(listint_t));
		if (nodo)
		{
			nodo->n = n;
			nodo->next = p->next;
			p->next = nodo;
		}
	}
	return (nodo);
}
