#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to a pointer struct
 *
 * Description: You are not allowed to use more than 1 loop
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL, *b = NULL;

	if (*head)
		while (*head)
		{
			b = (*head)->next;
			(*head)->next = a;
			a = *head;
			*head = b;
		}
	return (*head = a);
}
