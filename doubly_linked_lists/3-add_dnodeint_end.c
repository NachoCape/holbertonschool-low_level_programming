#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to a struct of type dlistint_t
 * @n: const int n (number that the new node will contain)
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head, *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!aux)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = node;
		node->prev = aux;
	}
	return (node);
}
