#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 *
 * @a: First diagonal
 *
 * @size: Second
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int c, k;

	c = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		c += a[(size * i) + i];
		k += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", c, k);
}
