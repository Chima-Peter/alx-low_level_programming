#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 *
 *  Return: Always 0.
 */
void jack_bauer(void)
{
	int i, n, c, d;

	for (i = '0'; i < '3'; i++)
	{
		for (n = '0'; n < '4'; n++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (n != '4' && n != '5' && n != '6' && n != '7' && n != '8' && n != '9')
					{
						_putchar(i);
						_putchar(n);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
