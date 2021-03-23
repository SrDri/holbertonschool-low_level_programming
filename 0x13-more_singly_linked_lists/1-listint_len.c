#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints all the elements of a listint_t list
 * @h: a pointer list
 * Return: count
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *aux;

	aux = h;

	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}

	return (count);
}
