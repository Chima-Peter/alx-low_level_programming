#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers
 * Return: Returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list print_list;
	va_start(print_list, n);
	for(i = 0; i < n; i++)
	{
		num = va_arg(print_list, int);
		printf("%d", num);
		if(i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_list);
}
