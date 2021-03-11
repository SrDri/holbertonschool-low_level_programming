#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum of all its parameters
* @n: number
* Return: sum all
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);
}
