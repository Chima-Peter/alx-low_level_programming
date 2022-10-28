#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024.
 * Return: Always (Success).
 */
int main(void)
{
	int i;

	int a = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			a = a + i;
		}
	}
	printf("%d\n", a);
	return (0);
}
