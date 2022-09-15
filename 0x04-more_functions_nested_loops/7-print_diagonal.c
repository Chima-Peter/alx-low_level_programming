#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal
 * line on the terminal.
 *
 * @n: The interger.
 */
void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == i)
					_putchar('\\');
				else if (c < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
