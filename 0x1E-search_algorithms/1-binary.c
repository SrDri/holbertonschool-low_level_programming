#include "search_algos.h"

/**
 * search_bin - search value sorted array int's binary search algorithm
 * @array: array
 * @beg: beginning subarray
 * @end: end subarray
 * @search_value: value search
 * Return: returns index or -1
*/

int search_bin(int *array, int beg, int end, int search_value)
{
	int c = 0;
	int op = 0;

	if (end >= beg)
	{
		op = (end + beg) / 2;

		printf("Searching in array: ");
		for (c = beg; c <= end; c++)
		{
			if (c == beg)
				printf("%d", array[c]);
			else
				printf(", %d", array[c]);
		}
		printf("\n");

		if (array[op] == search_value)
			return (op);

		if (array[op] > search_value)
		{
			return (search_bin(array, beg, op - 1, search_value));
		}
		else if (array[op] < search_value)
		{
			return (search_bin(array, op + 1, end, search_value));
		}
	}
	else
	{
		return (-1);
	}
	return (0);
}

/**
 * binary_search - use binary search for array
 * @array: array
 * @size: size array
 * @value: value search
 * Return: index or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int total = 0;

	if (array == NULL)
		return (-1);

	total = search_bin(array, 0, size - 1, value);

	return (total);
}
