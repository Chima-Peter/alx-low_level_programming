#include "function_pointers.h"

/**
 * int_index - Main function
 *
 * @array: The array to be checked
 *
 * @size: Size of the array
 *
 * @cmp: The function to be used
 *
 * Return: Returns the value of the index of the first
 * matchng character or -1 if mot matching.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
