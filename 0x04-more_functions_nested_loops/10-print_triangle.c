#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 *
 * @size: The interger
 *
 */
void print_triangle(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (n = i; n < size; ++n)
			{
				_putchar(' ');
			}
			for (n = 1; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
