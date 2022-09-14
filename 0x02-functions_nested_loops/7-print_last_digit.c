#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * @n: The interger
 *
 *
 * Return: Always n.
 */
int print_last_digit(int n)
{
	int a;

	if (n >  0)
	{
		a = n % 10;
		return (a);
	} else if (n < 0)
	{
		n = n * -1;
		a = n % 10;
		return (a);
	}
	return (0);
}
