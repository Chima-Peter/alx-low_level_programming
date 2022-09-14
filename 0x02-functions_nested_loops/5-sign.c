#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * @n: The interger.
 *
 * Return: Code returns 1 if positive, 0 if neutral and -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
