#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse,
 *  followed by a new line.
 *
 *  @s: The interger
 */
void print_rev(char *s)
{
	int i, n, length;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	length = i;

	for (n = length - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
