#include "main.h"

/**
 * _strpbrk - Searches a string for a =ny set of bytes
 *
 * @s: String to be searched
 *
 * @accept: String to search for
 *
 * Return: Not 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *s != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
