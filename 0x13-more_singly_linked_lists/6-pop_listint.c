#include "lists.h"
#include <stdio.h>

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
