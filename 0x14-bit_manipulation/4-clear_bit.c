#include "main.h"

/**
 * clear_bit: Sets the value of bit a given index to 0
 * @n: The bit to be changed
 * @index: Position of the bit
 * Return: Returns 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (1);
}
