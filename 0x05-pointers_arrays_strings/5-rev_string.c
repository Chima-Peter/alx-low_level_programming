#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: The interger
 */
void rev_string(char *s)
{
	char tmp;
	int i, n, length;

	i = 0;
	length = 0;

	while (s[i] != 0)
	{
		i++;
	}

	length = i - 1;

	for (n = 0; n < i / 2; n++)
	{
		tmp = s[n];
		s[n] = s[length];
		s[length--] = tmp;
	}
}
