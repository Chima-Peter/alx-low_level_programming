#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive numbers
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
	int i, k, add = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			k = 0;

			if (atoi(argv[i]) == 0)
			{
				printf("Error");
				k++;
				break;
			}
			else
			{
				add = add + atoi(argv[i]);
			}
			if (k == 1)
				break;
		}
		printf("%d\n", add);
	}
	return (0);
}
