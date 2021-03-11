#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print number with separator
* @separator: ,
* @n: numbers
* Return: numbers and separator
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(list, int), separator);
			else
				printf("%d", va_arg(list, int));
		}
		else
			printf("%d", va_arg(list, int));
	}
	printf("\n");
}
