#include <stdio.h>

/**
* main - Prints a program that prints all single digit numbers of base 10.
*
* Return: Code returns 0 if successful.
*/
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
