#include "function_pointers.h"

/**
 * array_iterator - Main function
 *
 * @array: Array
 *
 * @size: Size of array
 *
 * @action: Pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
