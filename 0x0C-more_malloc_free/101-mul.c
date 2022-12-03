#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	unsigned long num1, num2, mul;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atol(argv[2]);
	num2 = atol(argv[3]);
	mul = num1 * num2;
	printf("%ld", mul);
	return (0);
}
