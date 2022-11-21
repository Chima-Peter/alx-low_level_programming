#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Concatenates 2 strings
 *
 * @s1: First string.
 *
 * @s2: Second string.
 * Return: NULL or pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, l, n = 0;
	char *str;

	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (k = 0; s2[k] != '\0'; k++)
	{

	}
	l = i + k + 1;
	if (l < 1)
	{
		return (0);
	}
	str = malloc(l);
	
		if (str == NULL)
			{
				return (NULL);
			}
	for (i = 0; s1[i] != '\0'; i++, n++)
		str[n] = s1[i];
	for (k = 0; s2[k] != '\0'; k++, n++)
		str[n] = s2[k];
	str[n] = '\0';
	return (str);
}
