#include "main.h"

/**
 * _strncpy - Writs a function that copies a string.
 *
 * @dest: The interger 1.
 *
 * @src: The interger 2.
 *
 * @n: Number of copies.
 *
 *Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
