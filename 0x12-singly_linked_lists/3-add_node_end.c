#include "lists.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @str: string
 * Return: length string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
* add_node_end - print lenght the struct list
* @head: pointer structure
* @str: string arg
* Return: list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (0);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
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
