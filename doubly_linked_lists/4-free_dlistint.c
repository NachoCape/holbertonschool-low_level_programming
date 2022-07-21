#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to a struct of type dlistint_t
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (head)
	{
		head = head->next;
		free(aux);
		aux = head;
	}
}
