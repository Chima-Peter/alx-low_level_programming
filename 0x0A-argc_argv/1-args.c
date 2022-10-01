#include "main.h"
#include <stdio.h>

/**
 * main - Print6s number of arguments passed into it
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	(void) argv;

	for (i = 0; i < argc; i++)
	{
		sum = sum + i;
	}
		printf("%d\n", sum);
	return (0);
}
