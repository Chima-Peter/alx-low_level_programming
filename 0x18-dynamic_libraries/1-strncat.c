#include "main.h"

/**
 * _strncat - writes a functionthat concatenates 2 strings.
 *
 * @dest: Interger 1
 *
 * @src: Interger 2.
 *
 * @n: Number of concats
 *
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
