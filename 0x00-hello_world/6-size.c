#include <stdio.h>

/**
 * main - Prints a program showing the size of various data types on a computer
 *
 * Return: Value returns 0 if successful, else nothing.
 */
int main(void)
{
	printf("\n size of a char: %d byte(s)", sizeof(char));
	printf("\n size of int: %d byte(s)", sizeof(int));
	printf("\n size of long int: %d byte(s)", sizeof(long));
	printf("\n size of long long int: %d byte(s)", sizeof(long long));
	printf("\n size of a float: %d byte(s)", sizeof(float));
	return (0);

}
