#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenation
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	int sum;
	char *arr;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
		}
	}
	sum = i + 1 + j;
	arr = malloc(sum * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		arr[i + k] = s2[k];
	}
	arr[i + j] = '\0';
	return (arr);
}
