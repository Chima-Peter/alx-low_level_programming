#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the value of y
 *
 * @x: First
 *
 * @y: Second
 *
 * Return: Returns the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (y = 1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
