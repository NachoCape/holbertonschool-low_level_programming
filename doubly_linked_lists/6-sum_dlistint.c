#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to a struct of type dlistint_t
 *
 * Return: the sum of all the data (n), if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
