#include "main.h"

/**
 * _strcmp - Compares 2 strings
 *
 * @s1: Interger 1
 *
 * @s2: Interger 2
 *
 * Return: Return 0 if correct else s1 - s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (s1 == '\0')
		{
			return (0);
		}
		return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
