#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main _ Adds positive numbers
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	int c;

	for (c = argv[argc]; argv[0] == '0'; c--)
	{

	}


	printf("%d\n", c);
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; 1 < argc; i++)
		{
			if (isdigit(atoi(argv[i])) == 0)
			{
				printf("Error\n");
				return (1);
			} else
			{
				add = add + atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
