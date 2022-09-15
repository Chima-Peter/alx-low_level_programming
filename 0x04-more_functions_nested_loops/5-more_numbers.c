#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 *
 */
void more_numbers(void)
{
	int c, n;

	for (c = 1; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
