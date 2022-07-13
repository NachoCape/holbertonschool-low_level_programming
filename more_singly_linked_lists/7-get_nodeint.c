#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to a pointer struct
 * @index: is the index of the node, starting at 0
 *
 * Description: where index is the index of the node, starting at 0
 * if the node does not exist, return NULL
 *
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p = head;

	while (p && index != i)
	{
		i++;
		p = p->next;
	}
	return (p);
}
