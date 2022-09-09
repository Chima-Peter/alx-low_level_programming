#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabets in reverse from z to a.
 *
 * Return: Code returns 0 if successfully run, else nothing.
 */
int main(void)
{
	int a;

	for (a = 'Z' ; a >= 'A' ; a--)
	{
		putchar(tolower(a));
	}
	putchar('\n');
	return (0);
}
