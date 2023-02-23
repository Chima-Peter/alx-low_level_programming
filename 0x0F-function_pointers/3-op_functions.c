#include "3-calc.h"
/**
 * op_add- Adds a and b
 * op_sub-  Subtracts b from a
 * op_div-  Divides a and b
 * op_mul- Multiplies a and b
 * op_mod: Divides a and b and returns the remainder
 * @a: Integer 1
 * @b: Integer 2
 * Return: Returns an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
