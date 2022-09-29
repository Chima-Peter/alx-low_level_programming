#include "main.h"

/**
 * _sqrt_recursion - Finds the natural sqrt of a number
 *
 * @n: Number
 *
 * Return: Sqrt of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_check(n, 0));
}

/**
 * real_sqrt_check - Checks for natual numbers
 *
 * @n: Number
 *
 * Return: The result of the check
 */
int real_sqrt_check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (real_sqrt_check(n, (i + 1)));
}
