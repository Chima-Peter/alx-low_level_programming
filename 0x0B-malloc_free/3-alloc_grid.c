#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Creates a 2 dimensional array
 *
 * @width: Array columns
 *
 * @height: Array rows
 *
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int i, n, k;
	int **arr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
		arr = malloc(sizeof(int) * height);

		if (arr == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	}
	for (n = 0; n < height; n++)
	{
		for (k = 0; k < width; k++)
		{
			arr[n][k] = 0;
		}
	}
	return (arr);
	if (arr == NULL)
		return (NULL);
}
