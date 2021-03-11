#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - sum of all its parameters
* @n: number
* Return: sum all
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
