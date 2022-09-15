#include <stdio.h>

/**
 * main - Write a program that prints the numbers
 * from 1 to 100, followed by a new line.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int abc;

	for (abc = 1; abc <= 100; abc++)
	{
		if (abc % 3 == 0 && abc != 0)
		{
			printf("Fizz ");
			continue;
		}
		if (abc % 5 == 0 && abc != 0)
		{
			printf("Buzz ");
			continue;
		}
		if (abc % 3 == 0 && abc % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		} else if (abc != 100)
		{
			printf("%d ", abc);
		}
	}
	putchar('\n');
	return (0);
}
