#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - array from min to max
 * @min: min number
 * @max: max number
 * Return: returns pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}