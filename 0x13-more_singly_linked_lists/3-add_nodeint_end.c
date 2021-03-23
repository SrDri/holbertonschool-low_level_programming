#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - node end
 * @head: pointer head list
 * @n: int
 * Return: pointer head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = node;

	return (node);
}
