#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: x2 pointer
 * @n: n - new node
 * Return: the address of new node or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = (*head);
		*head = new_node;
	}
	return (new_node);
}
