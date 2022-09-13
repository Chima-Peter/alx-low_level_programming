#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 *  in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char ch = 1;

	while (ch <= 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		ch++;
	}
}
