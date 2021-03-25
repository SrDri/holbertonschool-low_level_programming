#include <stdio.h>
#include "holberton.h"

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}

	return (i);
}

unsigned int binary_to_uint(const char *b)
{
	int i, len, j;
	unsigned int res;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b) - 1;

	res = 0;
	j = 0;
	for (i = len; i >= 0; i--, j++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		res += (b[i] - 48) << j;
	}

	return (res);
}
