
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && j < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
