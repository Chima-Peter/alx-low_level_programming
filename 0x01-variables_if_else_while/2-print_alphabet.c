#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Code returns 0 upon successful execution.
 */
int main(void)
{
	char ch;

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(tolower(ch));
	}
	return (0);
}
