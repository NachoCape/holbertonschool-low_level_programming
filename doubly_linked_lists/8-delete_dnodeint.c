#include "lists.h"
#include "5-get_dnodeint.c"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to a pointer to a struct
 * @index: unsigned int (index of the element to remove)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = get_dnodeint_at_index(*head, index);

	if (!aux)
		return (-1);
	if (!aux->prev && !aux->next)
		*head = NULL;
	else if (!aux->prev && aux->next)
	{
		*head = aux->next;
		(*head)->prev = NULL;
	} else if (aux->prev && !aux->next)
	aux->prev->next = NULL;
	else
	{
		aux->prev->next = aux->next;
		aux->next->prev = aux->prev;
	}
	free(aux);
	return (1);
}
