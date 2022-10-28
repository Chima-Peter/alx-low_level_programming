#include "main.h"
#include <stdio.h>

/*
 * main - Sums up natural numbers that are multiples of 3 and 5 from 1 to 1024
 *
 * Return: returns 0.
 */

int main()
{
	int i;

	int a = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			a = a + i;
		}
	}
	printf("%d\n", a);
	return(0);
}
