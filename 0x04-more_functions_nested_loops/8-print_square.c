#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 *
 * @size: The interger.
 */
void print_square(int size)
{
	int i, n;
		if (size > 0)
		{
			for (i = 1; i <= size; i++)
			{
				for (n = 1; n <= size; n++)
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
