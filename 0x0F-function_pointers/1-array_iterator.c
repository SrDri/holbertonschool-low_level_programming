#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - print name
* @name: string
* @f: pointer
* Return: f name
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
