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
	int cm;

	for (ch = 48; ch <= 57; ch++)
	{
		for (cd = 48; cd <= 57; cd++)
		{
			for (cm = 48; cm <= 57; cm++)
			{
				if (ch != cd && ch != cm && cd != cm && ch < cd && ch < cm && cd < cm)
				{
					putchar(ch);
					putchar(cd);
					putchar(cm);
					if (ch != 55 || cd != 56 || cm != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

