#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes the node at
 * @head: pointer
 * @index: index
 * Return: ptr with the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *tmp, *aux;

	if (head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
		return (1);
	}

	i = 0;
	tmp = *head;
	while (i < index - 1)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	aux = tmp->next;
	tmp->next = aux->next;
	free(aux);
	return (1);
}
