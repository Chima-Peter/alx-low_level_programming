#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Write a function that prints all natural numbers from
 * n to 98, followed by a new line.
 *
 * @n: Random interger.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", n);
		} else if (i == 98)
		{
			printf("%d\n", n);
		}
	}
	} else if (n >= 98)
	{
	for (i = n; i >= 98; i--)
	{
		if (i != 98)
		{
			printf("%d, ", n);
		} else if (i == 98)
		{
			printf("%d\n", n);
		}
		return (0);
	}
	}
}
