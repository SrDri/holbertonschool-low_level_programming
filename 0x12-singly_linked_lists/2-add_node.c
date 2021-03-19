#include "lists.h"
#include <stdio.h>

/**
* add_node - print lenght the struct list
* @head: pointer structure
* @str: string arg
* Return: list
*/

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *node;

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
	node->next = *head;

	*head = node;

	return (*head);
}
