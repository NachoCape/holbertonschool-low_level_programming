#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to a struct
 * Return: the sum of all the data (n) of a listint_t
 * linked list, if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int res = 0;

	while (p)
	{
		res = res + p->n;
		p = p->next;
	}
	return (res);
}
