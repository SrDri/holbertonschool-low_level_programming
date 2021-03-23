#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - free list
 * @head: pointer list
 * @index: int nodes
 * Return: head
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count <= index; count++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		if (count == index)
		{
			return (head);
		}

		head = head->next;
	}

	return (head);
}
