#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node given position
 * @h: x2 pointer
 * @idx: index
 * @n: new node
 * Return: new node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *actual;
	unsigned int c = 0;

	if (h == NULL)
		return (NULL);

	actual = *h;

	if (idx == 0)
		return (add_dnodeint(h, n)); /* 0 */

	while (actual && c < idx)
	{
		actual = actual->next;
		c++;
	}

	if (!actual && c == idx)
		return (add_dnodeint_end(h, n)); /* final */
	else if (actual && c == idx)
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);

		/* new node */
		node->n = n;
		node->prev = actual->prev;
		node->next = actual;

		/* links to prev & next */
		actual->prev->next = node;
		actual->prev = node;

		return (node);
	}
	return (NULL);
}
