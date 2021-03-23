#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum list
 * @head: pointer list
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
