#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s - The interger.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
