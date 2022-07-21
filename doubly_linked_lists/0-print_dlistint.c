#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to a struct of type dlistint_t
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int res = 0;
	const dlistint_t *aux = h;

	while (aux)
	{
		res++;
		printf("%d\n", aux->n);
		aux = aux->next;
	}
	return (res);
}
