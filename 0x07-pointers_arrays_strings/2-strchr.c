#include "main.h"

/**
 * _strchr - Locates a string
 *
 * @s: String
 *
 * @c: Character
 *
 * Return: First occurence of charcter or null
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (0);
		}
	}
}
