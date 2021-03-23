#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free list
 * @head: pointer
 * Return: no
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
