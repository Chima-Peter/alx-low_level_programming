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
	int i, a;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		} else if (i == 98)
		{
			printf("%d\n", i);
		}
	}
	else if (n >= 98)
	{
	for (a = n; a >= 98; a--)
	{
		if (i != 98)
		{
			printf("%d, ", a);
		} else if (i == 98)
		{
			printf("%d\n", a);
		}
	}
	}
}
