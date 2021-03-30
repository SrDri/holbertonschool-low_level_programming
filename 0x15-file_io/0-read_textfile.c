#include "holberton.h"
#include <stdio.h>

/**
 * read_textfile - read text file
 * @filename: name file
 * @letters: read
 * Return: w
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, r, w;
	char buff[BUFSIZ];

	if (filename == NULL || letters == 0)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	r = read(file_descriptor, buff, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
		return (0);

	if (r != w)
		return (0);

	close(file_descriptor);

	return (w);
}
