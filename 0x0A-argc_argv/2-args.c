#include <stdio.h>

/**
 * main - print
 * @argc: arguement 1
 * @argv: argument 2
 * Return: none
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i != argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
