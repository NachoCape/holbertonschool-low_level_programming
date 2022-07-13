#include "lists.h"

/**
 * listint_len - count the number of elements in a linked list
 * @h: pointer to a struct of type listint_t
 * Return: the number of elements in a lined listin_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		res++;
		h = h->next;
	}
	return (res);
}
