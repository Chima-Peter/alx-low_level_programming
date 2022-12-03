#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates the memory
 * @ptr: pointer to fmr memory block
 * @old_size: Previous memory size
 * @new_size: New memory size
 * Return: Returns void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr;
	char *new = ptr;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
		free(arr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		arr[i] = new[i];
	arr[i] = '\0';
	return (arr);
	free(arr);
}
