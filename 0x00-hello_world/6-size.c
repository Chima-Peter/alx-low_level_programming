#include <stdio.h>

/**
 * main - Prints a program showing the size of various data types on a computer
 *
 * Return: Value returns 0 if successful, else nothing.
 */
int main(void)
{
	printf(" size of a char: %d byte(s) \n", sizeof(char));
	printf(" size of int: %d byte(s) \n", sizeof(int));
	printf(" size of long int: %d byte(s) \n", sizeof(long));
	printf(" size of long long int: %d byte(s) \n", sizeof(long long));
	printf(" size of a float: %d byte(s) \n", sizeof(float));
	return (0);

}
