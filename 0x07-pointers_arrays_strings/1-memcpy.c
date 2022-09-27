#include "main.h"

/**
 * _memcpy - Copies a memory area.
 *
 * @dest: Copies to here
 *
 * @src: Copies from here
 *
 * @n: Number of copies.
 *
 * Return: Always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
