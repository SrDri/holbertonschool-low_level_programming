#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - free list
 * @head: pointer list
 * Return: int empty
*/

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int empty = 0;

	if (*head == NULL)
	{
		return (empty);
	}

	aux = *head;
	empty = (*head)->n;
	*head = aux->next;

	free(aux);

	return (empty);
}
