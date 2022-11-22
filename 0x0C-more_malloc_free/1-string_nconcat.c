#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n number of string
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * @n: Number of charcters to be concatenated
 *
 * Return: NULL or pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, b, k, x, j = 0;
	char *dest;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (b = 0; s2[b] != '\0'; b++)
	{

	}
	k = i + b + 1;
	dest = malloc(sizeof(char) * k);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++, j++)
	{
		dest[j] = s1[i];
	}
	if (n < b)
	{
		for (x = 0; x < n; x++, j++)
		{
			dest[j] = s2[x];
		}
	}
	else
	{
		for (x = 0; s2[x] != '\0'; x++, j++)
		{
			dest[j] = s2[x];
		}
	}
	return (dest);
	free(dest);
}
