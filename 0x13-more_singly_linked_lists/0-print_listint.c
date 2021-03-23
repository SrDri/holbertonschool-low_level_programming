#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the listint_t list
 * Return: the size of the linked list, size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *aux;

	aux = h;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		count++;
	}

	return (count);
}
