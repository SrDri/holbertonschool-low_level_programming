#include "lists.h"
#include <stdio.h>

/**
* add_node_end - print lenght the struct list
* @head: pointer structure
* @str: string arg
* Return: list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;
	int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
