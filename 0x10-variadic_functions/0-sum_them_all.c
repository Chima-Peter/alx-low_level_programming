#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- Returns the sum of all paramters
 * @n: Numbetr of parameters
 * Return: Returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list sum_list;

	va_start(sum_list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sum_list, int);
	}
	va_end(sum_list);
	return (sum);
}
