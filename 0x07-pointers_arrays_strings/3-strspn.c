#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Initial segment
 *
 * @accept: Matching segment
 *
 * Return: Number of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, c, j, k;

	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				k = 1;
			}
		}
		if (k == 0)
		{
			return (c);
		}
	}
	return (0);
}
