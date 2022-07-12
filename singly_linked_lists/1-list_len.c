#include "lists.h"

/**
 * list_len - count number of elements in a linked list_t list
 * @h: struct list_t
 * Return: return number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t res = 0;

	while (h)
	{
		res++;
		h = h->next;
	}
	return (res);
}
