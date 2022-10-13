#include "function_pointers.h"

/**
 * print_name - Main function
 *
 * @f: Pointer to function
 *
 * @name: Name to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
