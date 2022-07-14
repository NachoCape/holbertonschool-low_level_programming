#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to a pointer struct
 * @index:  is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head, *ant = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		if (!p)
			return (-1);
		if (p && !p->next)
			*head = NULL;
		else
		{
			*head = p->next;
			p->next = NULL;
		}
		free(p);
	} else
	{
		while (p && i != index)
		{
			ant = p;
			i++;
			p = p->next;
		}
		if (i == index)
		{
			if (!p->next)
				ant->next = NULL;
			else
				ant->next = p->next;
			free(p);
		} else
			return (-1);
	}
	return (1);
}
