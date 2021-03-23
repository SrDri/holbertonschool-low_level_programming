#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free list
 * @head: pointer list
 * Return: head
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	if (head->next != NULL)
	{
		free(head->next);
	}

	free(head);
}
