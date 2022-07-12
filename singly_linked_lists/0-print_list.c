#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: struct list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t res = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		res++;
	}
	return (res);
}
