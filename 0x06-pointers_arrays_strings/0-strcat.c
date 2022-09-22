#include "main.h"

/**
 * @*_strcat - writes a function that concatentaes 2 strings.
 *
 * @*dest: The interger 1.
 *
 * @*src: The interger 2.
 *
 * @dest: Interger 1
 *
 * @src: Interger2.
 *
 * Return: Always returns the value of dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
