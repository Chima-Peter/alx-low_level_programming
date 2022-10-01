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
	int i, mul = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
