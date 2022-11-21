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
	int i, n. k;

	if (width < 1 || height < 1)
		return (NULL);
	else if (width > 1 || height > 1)
	{
		int **arr = malloc(sizeof(int **) * height);

		if (arr != NULL)
		{
			for (i = 0; i < height; i++)
				arr[i] = malloc(sizeof(int *) * width);
			if (arr[i] != NULL)
			{
				for (n = 0; n < height; n++)
				{
					for (k = 0; k < width; k++)
					{
						arr[n][k] = 0;
					}
				}
			}
			else
				return (NULL);
			return (arr);
		}
		else if (arr == NULL)
			return (NULL);
	}
}
