#include "holberton.h"

/**
 * _strspn - copy
 * @accept: accept
 * @s: numbers
 * Return: return pointer
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				a++;
				break;
			}
		}
		if (a == 0)
		{
			return (i);
		}
	}
	return (j);
}
