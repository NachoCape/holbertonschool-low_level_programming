#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of a struct
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head;
		if (i->str)
			free(head->str);
		head = head->next;
		free(i);
	}
}
