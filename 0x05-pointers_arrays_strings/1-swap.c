#include "main.h"

/**
 * swap_int - Write a function that swaps the
 *  values of two integers.
 *
 * @*n: The interger.
 *
 *  Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = (*a + *b);
	*b = (*a - *b);
	*a = (*a - *b);

}
