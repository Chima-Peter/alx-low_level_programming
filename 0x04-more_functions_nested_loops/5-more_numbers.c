#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 *
 *  Return: Always 0.
 */
void more_numbers(void)
{
	int n, c;

	for (n = 1; n <= 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}
	}
		_putchar('\n');
}
