#include "lists.h"
#include <stdio.h>

/**
* list_len - print lenght the struct list
* @h: pointer structure
* Return: int
*/

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}

		h = (*h).next;
	}

	return (i);
}
