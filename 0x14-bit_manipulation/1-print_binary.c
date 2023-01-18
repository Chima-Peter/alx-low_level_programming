#include "main.h"

/**
 * print_binary- Convrts from decimal number to binary format
 * @n: Decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned int x;
	int i;

	for (i = 31; i >= 0; i--)
	{
		x = n >> i;
		if (x & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
