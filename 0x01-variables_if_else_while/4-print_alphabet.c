#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Code returns 0 if successful, else nothing.
 */
int main(void)
{
	int ch;

	for (ch = 'A' ; ch <= 'Z'; ch++)
	{
		if (ch != 'Q' && ch != 'E')
		{
			putchar(tolower(ch));
		}
	}
	putchar('\n');
	return (0);
}

