#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- Prints strings, followed by a new line
 * @separator: String to print betweeen strings
 * @n: Number of strings
 * Return: Returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list print_string;

	va_start(print_string, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(print_string, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("nil");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_string);
}
