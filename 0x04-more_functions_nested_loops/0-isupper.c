#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: the number of string to check
 * Return: 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
