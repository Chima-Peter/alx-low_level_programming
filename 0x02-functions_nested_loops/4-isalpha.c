#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 *
 * @c: The interger used.
 *
 * Return: Code returns 1 if its alphabetic and 0 if not.
 */
int _isalpha(int c)
{
	return (c >= 'A' && c <= 'Z' || c >= 'a' && c<= 'z');
}
