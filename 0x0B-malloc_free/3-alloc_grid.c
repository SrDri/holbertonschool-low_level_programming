#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 pointers to 2D array.
 * @width: width
 * @height: height
 * Return: a.
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			a[i][k] = 0;
		}
	}
	return (a);
}
