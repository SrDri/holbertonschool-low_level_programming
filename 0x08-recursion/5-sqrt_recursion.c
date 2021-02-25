#include "holberton.h"
/**
 * _sqrt_recursion - sqrt
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	res = (inverse_pow(1, n));
	return (res);

}
/**
 * inverse_pow - inverse
 * @i: int1
 * @j: int2
 * Return: int
 */
int inverse_pow(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	return (inverse_pow(i + 1, j));
}
