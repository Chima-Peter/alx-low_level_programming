#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, then by a new line.
 *
 * Return: Code returns 0 if successful, else nothing.
 */
int main(void)
{
	int hexn;
	int hexa;

	for (hexn = 48 ; hexn <= 57 ; hexn++)
	{
		putchar(hexn);
	}

	for (hexa = 97 ; hexa <= 102 ; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');

	return (0);
}
