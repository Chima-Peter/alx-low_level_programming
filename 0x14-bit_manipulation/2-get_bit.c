#include "main.h"

/**
 * get_bit- Gets the value of bit at a given index
 * @n: Decimal number
 * @index: Given index
 * Return: Returns the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned int x;

	if (index > 31)
		return (-1);
	else
	{
		for (i = 0; i < 1; i++)
		{
			x = n >> index;
			if (x & 1)
				return (1);
			else
				return (0);
		}
	}
	return (0);
}
