#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the prime factors of number
 *
 * Return: Alwyas 0 (SUCCESS)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % 1 == 0)
		{
			max = -1;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;
	printf("%ld\n", max);

	return (0);
}
