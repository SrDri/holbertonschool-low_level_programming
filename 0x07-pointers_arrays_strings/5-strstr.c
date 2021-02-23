#include "holberton.h"

/**
 * _strpbrk - char comparation
 * @haystack: pointer
 * @needle: comparation
 * Return: return pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == 32)
			{
				return (haystack + i);
				break;
			}
		}
	}
	return ('\0');
}
