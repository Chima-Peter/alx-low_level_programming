#include "main.h"

/**
 * set_bit- Sets the value of a bit to 1 at a given index.
 * @n: Interger array
 * @index: Value at this index should be changed
 * Return: Return 1 if it worked else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;
	if (index > 31)
		return (-1);
	else
	{
		x = 1 << index;
		*n = x | *n;
		return (1);
	}
	return (0);
}
