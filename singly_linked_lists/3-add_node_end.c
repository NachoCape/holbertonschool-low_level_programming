#include "lists.h"
#include "2-strlen.c"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the struct
 * @str: string of chars
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *i = *head;

	node = malloc(sizeof(list_t));
	if (node)
		node->str = strdup(str);
	else
		return (NULL);
	if (node->str)
	{
		node->len = _strlen(str);
		node->next = NULL;
		if (i)
		{
			while (i->next)
				i = i->next;
			i->next = node;
		} else
			*head = node;
	} else
		free(node);
	return (node);
}
