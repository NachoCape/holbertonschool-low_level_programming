#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a head
 * @n: integer (number to add)
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->int = n;
		if (*head)
			node->next = *head;
		else
			node->next = NULL;
		*head = node;
	}
	return (node);	
}
