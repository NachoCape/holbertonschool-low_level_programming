#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;
	while (*head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
}
