#include "main.h"
#include <stdio.h>

/**
 *main - Prints its name
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; i < 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
