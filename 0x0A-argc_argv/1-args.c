#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i = argc - 1;
	(void) argv;
		printf("%d\n", i);
	return (0);
}
