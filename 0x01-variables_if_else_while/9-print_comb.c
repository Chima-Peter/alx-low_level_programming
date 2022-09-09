#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return:
 * Code returns 0 if successful.
 */
int main(void)
{
	int alp;

	for (alp = 48 ; alp <= 56 ; alp++)
	{
		putchar(alp);
		putchar(44);
		putchar(32);
	}
	for (alp = 57 ; alp <= 57 ; alp++)
	{
		putchar(alp);
	}

	return (0);
}
