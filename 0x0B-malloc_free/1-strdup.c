#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies a string.
 *
 * @str: String to be copied.
 *
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int i, n;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
		{

		}
	dest = malloc(n * sizeof(dest));

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
	free(dest);
}
