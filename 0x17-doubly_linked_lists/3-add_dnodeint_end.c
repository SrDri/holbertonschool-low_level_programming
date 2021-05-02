#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end list
 * @head: x2 pointer
 * @n: n - new node
 * Return: the address new node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *aux;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	aux = *head;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (aux != NULL)
		{
			if (aux->next == NULL)
			{
				node->prev = aux;
				aux->next = node;
				break;
			}
			aux = aux->next;
		}
	}
	return (node);
}
