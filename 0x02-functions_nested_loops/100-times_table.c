#include "main.h"

/*
 * print_times_table - Prints n times table.
 * n: Number of times table to print.
 */
void print_times_table(int n)
{
	int i, c, mul;

	if (n > 15)
	{
		
	}
	else {
	for (i = 0; i <= n; i++)
	{
		for (c = 0; c <= n; c++)
		{
			mul = i * c;

			_putchar(mul + '0');

			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
