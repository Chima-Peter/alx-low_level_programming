#include "main.h"

/**
 * swap_int - Write a function that swaps the
 *  values of two integers.
 *
 * @a: The interger 1.
 *
 * @b: The interger 2.
 *
 *  Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = (*a + *b);
	*b = (*a - *b);
	*a = (*a - *b);
}
