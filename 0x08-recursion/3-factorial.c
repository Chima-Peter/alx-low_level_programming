#include "main.h"

/**
 * factorial - Returns the factorial of a number
 *
 * @n: The number
 *
 * Return: Factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (n = 1);
	}
	return (n * factorial(n - 1));
}
