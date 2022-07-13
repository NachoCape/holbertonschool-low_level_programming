#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *rem = head;

	while (head)
	{
		head = head->next;
		free(rem);
		rem = head;
	}
}
