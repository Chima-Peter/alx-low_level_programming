#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 *
 *  Return: Always 0.
 */
void jack_bauer(void)
{
	int ch;
	int bh;

	ch = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar(i / 10);
			_putchar(i % 10);
			_putchar(':');
			_putchar(j / 10);
			_putchar(j % 10);
			j++;
		}
		i++;
	}
	return (0);
}
