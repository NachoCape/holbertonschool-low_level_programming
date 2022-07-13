#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to struct
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int res = 0;
	listint_t *aux;

	if (!*head)
		return (res);
	aux = *head;
	*head = (*head)->next;
	res = aux->n;
	free(aux);
	return (res);
}
