#include <stdio.h>

/**
 * main - finds and prints the prime factors of number
 *
 * Return: Alwyas 0 (SUCCESS)
 */
int main(void)
{
	long int num = 612852475143;
	int count;

	for (count = 2; num > 1; count ++)
	{
		while (num % count == 0)
		{
			printf("%d\n", count);
			num = num / count;
		}
	}
	return (0);
}
