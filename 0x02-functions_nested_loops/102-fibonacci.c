#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 *
 * Return: Always (success)
 */
int main(void)
{
	int i;
	long int first = 1, second = 2, sum;

	for (i = 0; i <= 50; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%ld", sum);

		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
