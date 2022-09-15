#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers,
 *  from 0 to 9, followed by a new line.
 *
 *  Return: Always 0.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
