#include "main.h"

/**
 * *cap_string - Write a function that capitalizes all words of a string.
 *
 * @s: Letter to be capitalised
 *
 * Return: Always char
 */
char *cap_string(char *s)
{
	int i, c;

	char j[13] = {' ', '\t'. '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',};

	for (i = 0; s[i] != '\0'; i++)
	{
		if(i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		for (c = 0; c < 13; c++)
		{
			if (s[i] == j[c])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
