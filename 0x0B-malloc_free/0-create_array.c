#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - Creates an array of chars.
 *
 * @size: Size of array
 *
 * @c: Charater to be initailased with
 *
 * Return: Null or to pinter
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}
		arr = malloc(sizeof(*arr) * size);

		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
		free(arr);
}
