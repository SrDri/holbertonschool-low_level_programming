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
 * append_text_to_file - ppends a text at the end of a file
 * @filename: the name of the file
 * @text_content: text to add
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = _strlen(text_content);
	w = write(fd, text_content, len);
    
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
