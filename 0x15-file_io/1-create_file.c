#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length
 * @s: string
 * Return: length the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}

	return (i);
}

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: text to add
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = _strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
