#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 numbers
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: Depends
 */
int main(int argc, char *argv[])
{
	int i, c, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		i = atoi(argv[1]);
		c = atoi(argv[2]);
		mul = i * c;

		printf("%d\n", mul);
	}
	return (0);
}
