#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head
 * @n: integer (number to add)
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *i = NULL;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		node->next = NULL;
		if (*head)
		{
			i = *head;
			while (i->next)
				i = i->next;
			i->next = node;
		}
	}
	return (node);
}
