#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Creates an array of intergers
 *
 * @min: Lowest variable
 *
 * @max: Highest variable
 *
 * Return: Returns NULL or to int pointer.
 */

int *array_range(int min, int max)
{
	int i, n;
	int *num;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	num = malloc(n * sizeof(int));
	if (num  == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++, min++)
	{
		num[i] = min;
	}
	return (num);
}
