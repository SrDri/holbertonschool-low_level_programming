#include "holberton.h"

/**
 * _strspn - copy
 * @accept: accept
 * @s: numbers
 * Return: return pointer
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count;

	count = 0;
	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
