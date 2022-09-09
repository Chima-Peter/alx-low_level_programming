#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all sinle digit numbers from 0.
 *
 * Return: Code returns 0 if successful, else nothing.
 */
int main(void)
{
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
	{
		printf("%d", ch);
	}
	putchar('\n');

	return (0);
}
