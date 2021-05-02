#include "lists.h"

/**
 * dlistint_len - return the number of elements
 * @h: constant pointer
 * Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *a;
	size_t counter = 0;

	a = h;

	while (a)
	{
		a = a->next;
		counter++;
	}
	return (counter);
}
