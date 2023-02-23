#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main()
{
	int operation;
	char* name = "-";
	operation = get_op_func(name);
	printf("%d\n", operation(4, 5));
	return (0);
}
