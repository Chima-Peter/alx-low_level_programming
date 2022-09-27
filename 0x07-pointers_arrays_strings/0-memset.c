#include "main.h"

/**
 * _memset - Writes a function that copies memory
 *
 * @s: Pointer to interger
 *
 * @b: Value to be copied
 *
 * @n: Number of times
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
