#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a struct of type listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		printf("%d\n", h->n);
		res++;
		h = h->next;
	}
	return (res);
}
