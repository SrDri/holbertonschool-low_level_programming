#include "lists.h"
#include <stdio.h>

/**
* print_list - print the struct list
* @h: pointer structure
* Return: int
*/

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if ((*h).str != NULL)
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = (*h).next;
	}

	return (i);
}
