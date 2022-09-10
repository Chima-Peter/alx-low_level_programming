#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Code returns 0 if successful, else nothing.
 */
int main(void)
{
	int ch;
	int cd;

	for (ch = 48; ch <= 57; ch++)
	{
		for (cd = 48; cd <= 57; cd++)
		{
			if (cd != ch && ch <= cd)
			{
				putchar(ch);
				putchar(cd);
				
				if (ch != 56 || cd != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
