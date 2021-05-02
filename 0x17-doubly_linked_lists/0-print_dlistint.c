#include "lists.h"

/**
 * print_dlistint - prints all elements the dlistint_t list
 * @h: pointer
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *a;
	size_t counter;

	a = h;
	counter = 0;

	while (a != NULL)
	{
		printf("%d\n", a->n);
		a = a->next;
		counter++;
	}
	return (counter);
}
