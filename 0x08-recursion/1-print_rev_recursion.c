#include "main.h"

/**
 * _print_rev_recursion - Pribts a string in revers
 *
 * @s: String to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
