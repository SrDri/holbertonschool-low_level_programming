#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node list
 * @head: pointer
 * @index: index
 * Return: the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;
	temp = head;

	while (temp != NULL)
	{
		if (counter == index)
			break;

		temp = temp->next;
		counter++;
	}
	return (temp);
}
