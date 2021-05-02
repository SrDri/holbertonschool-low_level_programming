#include "lists.h"

/**
 * sum_dlistint - return the sum list
 * @head: pointer
 * Return: the sum list
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int suma = 0;

	temp = head;

	while (temp != NULL)
	{
		suma = suma + temp->n;
		temp = temp->next;
	}
	return(suma);
}
