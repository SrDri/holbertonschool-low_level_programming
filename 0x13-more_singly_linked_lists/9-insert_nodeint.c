#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer list
 * @idx: the index
 * @n: value for the new node
 * Return: NULL or address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *node;

	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	aux = *head;

	if (aux != NULL)
	{
		for (count = 0; count < idx; count++)
		{
			if (count + 1 == idx)
			{
				node->n = n;
				node->next = aux->next;
				aux->next = node;

				return (node);
			}

			aux = aux->next;
		}
	}

	return (NULL);
}
