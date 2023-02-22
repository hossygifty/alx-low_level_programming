#include "main.h"

/**
 * print_last_digit - the function of last digit
 *
 * @f: parameter function of checks
 *
 * Return: always k
 */

int print_last_digit(int f)
{
	int k;

	k = f % 10;
	if (f < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}


