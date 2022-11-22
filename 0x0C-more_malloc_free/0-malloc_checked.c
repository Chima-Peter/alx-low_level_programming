#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Creates memory for b
 *
 * @b: Memory created for it.
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
	{
		exit(98);
	}
	return (num);
}
