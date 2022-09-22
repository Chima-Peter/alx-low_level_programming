#include "main.h"

/**
 * reverse_array - Writes a function that reverses the content of an array.
 *
 * @a: Interger 1
 *
 * @n: Number of elements inside array
 */
void reverse_array(int *a, int n)
{
	int i, c, mid;

	c = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		mid = a[i];
		a[i] = a[c];
		a[c--] = mid;
	}
}
