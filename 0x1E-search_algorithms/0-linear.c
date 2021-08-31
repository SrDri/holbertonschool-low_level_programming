#include "search_algos.h"

/**
 * linear_search - searche value in array integers in linear search algorithm
 * @array: array
 * @size: size array
 * @value: value to search
 * Return: index or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t c = 0;

	if (array == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%ld] = [%d]\n", c, array[c]);
		if (value == array[c])
			return (c);
	}
	return (-1);
}
