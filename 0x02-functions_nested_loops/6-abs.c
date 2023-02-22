#include "main.h"

/**
 * _abs - function for absolute value
 *
 * @a: parameter for absolute value
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

