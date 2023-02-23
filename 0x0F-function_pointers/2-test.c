#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if(size <= 0)
		return (-1);
	for(i = 0; i < size; i++)
	{
		if(cmp(array[i]) != 0)
		{
			j += 1;
			return (i);
		}
	}
	if(j < 1)
		return (-1);
	return (0);
}
