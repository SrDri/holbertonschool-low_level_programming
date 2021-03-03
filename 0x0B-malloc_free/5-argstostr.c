#include "holberton.h"
#include <stdlib.h>

/**
 * longitud - function
 * @s: string
 * Return: i
 */
int longitud(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * concatena - function
 * @dest: string destination
 * @src: string 1
 * Return: dest
 */
char *concatena(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - function
 * @ac: string
 * @av: pointer x2
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int lon;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	lon = 1;
	for (i = 0; i < ac; i++)
	{
		lon = lon + longitud(av[i]) + 1;
	}
	str = malloc(lon * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		concatena(str, av[i]);
		concatena(str, "\n");
	}
	return (str);
}
