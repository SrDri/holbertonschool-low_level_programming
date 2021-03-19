#include "lists.h"
#include <stdio.h>

/**
* add_node_end - print lenght the struct list
* @head: pointer structure
* @str: string arg
* Return: list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *node;
	list_t *temp;

	for (i = 0; str[i]; i++)
	{
	}

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (NULL);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = node;

	return (node);
}
