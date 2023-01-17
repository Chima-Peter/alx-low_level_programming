#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint- Convert a binary number to an unsigned int
 * @b: The binary number
 * Return: Returns either an unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, exp = 1, sum = 1;

	for (j = 0; b[j]; j++)
	{
	
	}
	if (j == 0)
		return(0);
	else
	{
		for (i = j - 1; i == 0; i--)
		{
			if (b[i] == '1')
				sum = sum * exp;
			exp *= 2;
			if (b[i] != '0' && b[i] != '1')
				return(0);
		}
		return(sum);
	}
}
