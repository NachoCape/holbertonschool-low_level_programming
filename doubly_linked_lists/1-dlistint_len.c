#include "lists.h"

/**
 * dlistint_len - count number of elements in a linked dlistint_t list
 * @h: pointer to a struct of type dlistint_t
 *
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	int res = 0;

	while (aux)
	{
		res++;
		aux = aux->next;
	}
	return (res);
}
