#include "lists.h"
#include "2-strlen.c"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the head of the list
 * @str: string of chars (element to add)
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node)
	{
		node->str = strdup(str);
		if (node->str)
		{
			node->len = _strlen(str);
			node->next = *head;
			*head = node;
		} else
			free(node);
	}
	return (node);
}
