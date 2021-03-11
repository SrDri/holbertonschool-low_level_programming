#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer inside a given array
 * @array: the array
 * @size: the size
 * @cmp: the callback
 * Return: return result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int res;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);

		if (res)
			return (i);
	}
	return (-1);
}
