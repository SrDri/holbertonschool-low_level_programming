#include "holberton.h"

/**
 * _strstr - char comparation
 * @haystack: pointer
 * @needle: comparation
 * Return: return pointer
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
