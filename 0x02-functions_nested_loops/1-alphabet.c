#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Code returns 0 if successful.
 */

int main(void)
{
	void print_alphabet(void)
	{
		char i;

		for(i='A'; i<='Z'; -++)
		{
			_putchar(i);
			_putchar('\n');
		}

		return (0);
	}
