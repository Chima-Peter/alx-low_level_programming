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

	for (alp = 48 ; alp <= 57 ; alp++)
	{
		putchar(alp);
		if (alp != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
